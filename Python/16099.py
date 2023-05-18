# //BOJ 16099 - BRONZ 5
# //https://www.acmicpc.net/problem/16099

t = int(input())
while(t>0):
    lt, wt, le, we = map(int, input().split())
    if(lt*wt > le*we):
        print("TelecomParisTech")
    elif(lt*wt < le*we):
        print("Eurecom")
    else:
        print("Tie")
    t-=1