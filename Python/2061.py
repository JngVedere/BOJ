K,L = map(int, input().split())
f = 0
for i in range(2,L):
    if(K%i==0):
        f = i
        break

if(f == 0):
    print("GOOD")
else:
    print("BAD", f)
