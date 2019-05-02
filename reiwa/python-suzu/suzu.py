#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def solve():
    n = int(input()) - 1
    sum = 0
    i = list(map(int, input().split()))
    for a in i:
        sum += a
    return -sum

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()
