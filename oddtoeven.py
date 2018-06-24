t = int(input())
for i in range(t):
	strin = input()
	num = int(strin)
	if(num % 2 == 0):
		print(strin)
		continue
	t = 0
	maxn = 0
	arr = []
	for i in range(len(strin)):
		val = int(strin[i])
		arr.append(val)
		if(i < len(strin) - 1):
			if(maxn < val and (val % 2 == 0)):
				maxn = val 		
				t = i
				break
	tmp = strin[len(strin) - 1]
	arr[len(strin) - 1] = int(maxn)
	arr[t] = int(tmp)
	arr = map(str, arr)
	strin = "".join(arr)
	print(strin)

