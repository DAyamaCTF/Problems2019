#!/usr/local/bin/python3
for _ in range(int(input())): 
    P=int(input())
    res=0
    for x in range(1,P+1):
        for y in range(1,P//x+1):
            if P%(x*y)==0:
                res+=1
    print(res)