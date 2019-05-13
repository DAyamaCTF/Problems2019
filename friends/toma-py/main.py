#!/usr/local/bin/python3
for _ in range(int(input())):
    s=input()
    for i in range(7): 
        if s[i] not in ['*',"friends"[i]]: print("No"); break
    else: print("Yes")