# Description

Programs in this directory are all iterative programs. Each program was manually instrumented to collect traces. Traces collected are size of input and loop counter on every execution. Traces are saved in a traces file.
To compile and run the programs you can use 
$ ./test.sh
or
$ make

# Complexity Analysis
$ complexity-recurrence/dig.py -trace path/to/trace -maxdeg MAXDEG -plot True

the -plot flag can be true or false. 
