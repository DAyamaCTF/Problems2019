#!/usr/local/bin/python3
for _ in range(int(input())):
    y,m,d=[int(i) for i in input().split()]; m+=1
    if m==13: y+=1; m=1
    print(y,m,d)