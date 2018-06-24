t = int(input())
for i in range(t):
	n,k = map(int,input().split())
	l = list(map(int, input().split()))
	count = 0
	for j in range(n):
		prod = 1
		t = j
		while(prod < k and t < n):
			prod = prod * l[t]
			if(prod >= k):
				break
			count += 1
			t += 1
	print(count)
