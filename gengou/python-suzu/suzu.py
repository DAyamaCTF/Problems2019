#!/usr/local/bin/python3
# -*- coding: utf-8 -*-

def solve():
    i = list(map(int, input().split()))
    if i[1] == 12:
        print(i[0]+1, 1, i[2])
    else:
        print(i[0], i[1]+1, i[2])

def main():
    cases = int(input())
    for _ in range(cases):
        solve()

if __name__ == '__main__':
    main()
