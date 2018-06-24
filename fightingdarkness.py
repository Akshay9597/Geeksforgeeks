t = int(input())
for i in range(t):
    n = int(input())
    strarr = input().split()
    arr = [int(num) for num in strarr]
    max = 0
    for num in arr:
        if(num > max):
            max = num
    print(max)
