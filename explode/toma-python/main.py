#!/usr/local/bin/python3
dh=[0,1,0,-1]
dw=[1,0,-1,0]

def isin(M,N,h,w):
    return 0<=h and h<M and 0<=w and w<N

def find_factory(s,M,N):
    for i in range(M):
        for j in range(N):
            if s[i][j]=='W':
                s[i][j]='.'
                return [i,j]

def find_critical_explosion(s,M,N,h,w):
    res=[]
    for dir in range(4):
        th=dh[dir]
        tw=dw[dir]
        nh=h
        nw=w
        for dist in range(1,10):
            nh+=th
            nw+=tw
            if nh<0 or M<=nh or nw<0 or N<=nw: break
            c=s[nh][nw]
            if c=='#': break
            if c.isdigit() and dist<=int(c):
                res.append([nh,nw])
                s[nh][nw]='.'
    return res
    

for _ in range(int(input())): 
    M,N = map(int,input().split())
    s=[]
    for i in range(M):
        s.append(list(input()))
    h,w = find_factory(s,M,N) 
    cands = find_critical_explosion(s,M,N,h,w)
    idx = 0
    while idx < len(cands):
        h,w = cands[idx]
        ncands = find_critical_explosion(s,M,N,h,w)
        cands.extend(ncands)
        idx+=1
    print(len(cands))