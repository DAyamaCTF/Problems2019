#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def solve():
    p = int(input())
    ans = 0
    for x in range(1,p+1):
        for y in range(1,p+1):
            if(p%(x*y) == 0):
                ans += 1
    return ans

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()