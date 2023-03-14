#BOJ 25206 - SILVER 5
#https://www.acmicpc.net/problem/25206

dict = {"A+":4.5,"A0":4.0,"B+":3.5,"B0":3.0,"C+":2.5,"C0":2.0,"D+":1.5,"D0":1.0,"F":0.0}
subjects = 20
credit_sum = 0

for i in range(0,20):
    _, credit, grade = input().split()
    if grade == "P":
        subjects = subjects-1
    else:
        credit_sum += dict[grade] * (float)credit

avg = ((float)credit_sum)/((float)subjects)
print(avg)


