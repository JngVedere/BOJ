index = int(input())
valueList = [0]*index

for i in range(index):
    valueList[i] = list(map(int, input().split()))

valueList.sort(key= lambda x:x[0]) #첫번째 값에 대하여 정렬

for i in range(index): #brute force
    a = 0
