#

# while(a:=input()) != '0':
#     l = len(a)
#     for i in range(int(l/2)+1):
#         if a[i] != a[l-i-1]:
#             print("no")
#             break 
#         if(l-2*i == 1 or l-2*i == 2):
#             print("yes")

# while(True):
#     print ("ret", s:=input()[::-1])

while int(s:=input()):print("yes"if
s==s[::-1]else"no")