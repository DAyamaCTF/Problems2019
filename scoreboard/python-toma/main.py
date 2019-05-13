#!/usr/local/bin/python3
for _ in range(int(input())): 
    a,b=map(int,input().split())
    print("Marines" if a==33 and b==4 else 
          "Tigers" if a==4 and b==33 else
          "Draw" if a==b else
          "Win" if a>b else 
          "Lose")