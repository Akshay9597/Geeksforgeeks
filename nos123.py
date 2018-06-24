t = int(input()) 
check = {1,2,3}
for i in range(t):
	n = int(input())
	arr = list(map(int,input().split()))
	for j in arr:
		j = str(j)
		tmp = set(map(int,j))
		if(not tmp.issubset(check)):
			print('-1')
			exit()
			break
	arr.sort()
	for j in arr:
		print(j,end = ' ')
