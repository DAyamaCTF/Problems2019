#!/usr/local/bin/python3
for _ in range(int(input())):
    a,b=[int(i) for i in input().split()]
    print(a+min(a+1,5)*b)