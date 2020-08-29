import re
T=int(input())
for i in range(T):
    strng,sub_strng=input().split()
    if sub_strng in strng:
        print("Yes")
    else:
        print("No")
