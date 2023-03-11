#BOJ 10811 - BRONZ 2
#https://www.acmicpc.net/problem/10811

N, M = map(int, input().split())
basket = []

for i in range(1,N+1):
    basket.append(i)
print("basket", basket)

for j in range(0,M):
    a, b = map(int, input().split())
    temp_length = b-a+1
    print(a,b)

    for k in range(a-1,int((a+b)/2)+1):
        print("running")
        temp = basket[k]
        basket[k] = basket[a+temp_length-k-1]
        basket[k] = temp
        print("val", temp, basket[k],basket[a+temp_length-k-1])

print("basket", basket)
