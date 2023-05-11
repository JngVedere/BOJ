# //BOJ 16099 - BRONZ 5
# //https://www.acmicpc.net/problem/16099

t = int(input())
while(t>0):
    lt, wt, le, we = map(int, input().split())
    f = lt*wt >= le*we
    if(f):
        print("TelecomParisTech")
    else:
        print("Eurecom")
    t-=1