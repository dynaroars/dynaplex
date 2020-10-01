#!/usr/bin/env python3

from os import listdir, path
import sys
import subprocess as sp
import tempfile
import os
from pathlib import Path

def vcmd(cmd, inp=None, shell=True):
    proc = sp.Popen(cmd,shell=shell,stdin=sp.PIPE,
                    stdout=sp.PIPE,stderr=sp.PIPE)
    return proc.communicate(input=inp)

def read_input(filename):
    assert path.exists(filename), filename
    data = []
    with open(filename) as file:
        lines = file.readlines()
    for l in lines:
        s = l.split()
        for c in s:
            try:
                data.append(int(c.strip()))
            except:
                return None #there might be non integer values idk why

    if len(data)<10:
        return None

    return data

def convert_octal(filename):
    assert path.exists(filename), filename
    fd, pathname = tempfile.mkstemp()
    try:
        cmd = "od -i -An {} > {}".format(filename, pathname)
        outMsg, errMsg = vcmd(cmd)
        assert not errMsg, errMsg1
        lines = read_input(pathname)
    finally:
        os.remove(pathname)

    return lines

if __name__ == '__main__':
    folder = Path(sys.argv[1]) #folder with perfuzz inputs
    output_file = sys.argv[2]  #file where WCET inputs are stored
    assert folder.is_dir(), folder
    assert path.exists(output_file), output_file

    folder = sorted(f for f in folder.iterdir() if str(f).endswith("+max"))
    print("number of inputs used ", len(folder))
    for f in folder:
        lines = convert_octal(f)
        if lines==None:
            continue
        with open(output_file, 'a') as f:
            print(lines, file=f)
