import sys
for i in range(3) :
    sum = 0
    n = int(sys.stdin.readline())
    for j in range(n) :
        temp = int(sys.stdin.readline())
        sum += temp
    if sum > 0 : print("+")
    elif sum < 0 : print("-")
    else : print("0")