#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def solve():
    a,b,p = map(int,input().split())
    ans = 0
    for x in range(1,p+1):
            if(0 < p - a * x and (p - a * x) % b == 0):
                ans += 1
    return ans

def main():
    cases = int(input())
    for _ in range(cases):
        print(solve())

if __name__ == '__main__':
    main()