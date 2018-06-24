def sumj(j):
	add = 0
	while(j != 0):
		add = add + (j % 10)
		j = j / 10
	return add
T = int(raw_input())
for i in range(0, T):
	n = int(raw_input('> '))
	j = 2
	maxi = 1
	print 'lkjflksdjf'
	while(j <= (n / 2) + 1):
		print 'in while'
		if((n % j) == 0):
			tmp = sumj(j)
			if(maxi < tmp):
				maxi = tmp
		j += 1
	tmp = sumj(n)
	if(maxi < tmp):
	   maxi = tmp
	print maxi
			

