#수들의 합

S = int(input()) 
N = 0
tempNumber = 0
while(True):
    if tempNumber >= S:
        N -=1
        tempNumber = int(N*(N+1)/2)
        break
    else:
        N+=1
        tempNumber = int(N*(N+1)/2)

if S - tempNumber < N+1:
    print(N)
else:
    print(N+1)