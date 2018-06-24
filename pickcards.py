import numpy as np
t = int(input())
for i in range(t):
	n = int(input())
	c = list(map(int,input().split()))
	c.sort()
	length = len(c)
	j = 0
	arr = np.empty(n)
	arrptr = 0
	flag = 0
	present = 0
	prevcount = 0
	prod = 1
	count = 0
	taken = 0 #cards already chosen for entry
	while(j < length):
		if(c[j] == present):
			flag = 1
			count += 1
			j += 1
			if(j == length and present <= arrptr):
				arr[arrptr] = (count + prevcount - taken)
				arrptr += 1
			continue
		if(flag == 0):
			present += 1
		if(present <= arrptr):
			arr[arrptr] = (count + prevcount - taken)
			prevcount = prevcount + count
			taken += 1
			count = 0
			arrptr += 1
			flag = 0
		else:
			prod = 0
	print('array', arr)
	if(prod == 0):
		print(prod)
		continue
	prod = 1
	while(j < arrptr):
		prod = prod * arr[j]
	if(arrptr != n):
		j = arrptr
		while(j < n):
			prod = prod * (arr[j - 1] - 1)
	print(prod)
