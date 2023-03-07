#화성 수학

def mul3(x):
    return x * 3

def add5(x):
    return x + 5

def sub7(x):
    return x - 7

operatorDict = {'@': mul3, '%':add5, '#':sub7}

test_case = int(input())
for _ in range(test_case):
    inputList = input().split()
    number = 0
    for i in range(len(inputList)):
        if i == 0:
            number = float(inputList[i])
            continue
        number = operatorDict[inputList[i]](number)
    
    print("{:.2f}".format(number))
