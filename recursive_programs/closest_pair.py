#!/usr/bin/env python3

from __future__ import division
from collections import namedtuple
from random import randint
import math as m
import heapq as hq
import random
import os

counter = 0

def get_key(item):
    return(item[0])


def closest_point_problem(points, depth, file):
    global counter
    point = []
    heap = []
    pt = namedtuple('pt', 'x y')
    for i in range(len(points)):
        counter = counter + 1
        point.append(pt(points[i][0], points[i][1]))
    point = sorted(point, key=get_key)
    visited_index = []
    find_min(0, len(point) - 1, point, heap, visited_index, depth, file)
    # print(hq.heappop(heap))

def find_min(start, end, point, heap, visited_index, depth, file):
    global counter
    with open(file, 'a') as f:
        print("{};2;{}".format(depth, len(point[start:end + 1])), file=f)
    if len(point[start:end + 1]) & 1:
        mid = start + ((len(point[start:end + 1]) + 1) >> 1)
        counter = counter + 1
    else:
        counter = counter + 1
        mid = start + (len(point[start:end + 1]) >> 1)
        if start in visited_index:
            start = start + 1
        if end in visited_index:
            end = end - 1
    if len(point[start:end + 1]) > 3:
        counter = counter + 1
        if start < mid - 1:
            distance1 = m.sqrt((point[start].x - point[start + 1].x) ** 2 + (point[start].y - point[start + 1].y) ** 2)
            distance2 = m.sqrt((point[mid].x - point[mid - 1].x) ** 2 + (point[mid].y - point[mid - 1].y) ** 2)
            if distance1 < distance2:
                hq.heappush(heap, (distance1, ((point[start].x, point[start].y), (point[start + 1].x, point[start + 1].y))))
            else:
                hq.heappush(heap, (distance2, ((point[mid].x, point[mid].y), (point[mid - 1].x, point[mid - 1].y))))
            visited_index.append(start)
            visited_index.append(start + 1)
            visited_index.append(mid)
            visited_index.append(mid - 1)
            find_min(start, mid, point, heap, visited_index, depth+1, file)
        if mid + 1 < end:
            distance1 = m.sqrt((point[mid].x - point[mid + 1].x) ** 2 + (point[mid].y - point[mid + 1].y) ** 2)
            distance2 = m.sqrt((point[end].x - point[end - 1].x) ** 2 + (point[end].y - point[end - 1].y) ** 2)
            if distance1 < distance2:
                hq.heappush(heap, (distance1, ((point[mid].x, point[mid].y), (point[mid + 1].x, point[mid + 1].y))))
            else:
                hq.heappush(heap, (distance2, ((point[end].x, point[end].y), (point[end - 1].x, point[end - 1].y))))
            visited_index.append(end)
            visited_index.append(end - 1)
            visited_index.append(mid)
            visited_index.append(mid + 1)
            find_min(mid, end, point, heap, visited_index, depth+1, file)

if __name__ == '__main__':
    for i in range(100):
        points = []
        depth = 0
        num_points = random.randint(10,100)
        for i in range(num_points):
            points.append((randint(- num_points << 2, num_points << 2), randint(- num_points << 2, num_points << 2)))

        path = "./closest"
        try:
            os.mkdir(path)
        except OSError as error:
            pass
        file = "./closest/output-{}".format(num_points)
        closest_point_problem(points, depth, file)

        with open("./closest/traces", 'a') as f:
            print("{};{}".format(num_points, counter), file=f)
        counter = 0
