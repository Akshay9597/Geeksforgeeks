def find(low,high,mid,n):
	tmp = mid * (mid+1) // 2
#	print('tmp',tmp)
	if(tmp == n):
		return mid
	elif(tmp < n):
#		print('1st elif')
		if((tmp + mid + 1) > n):
#			print('i reached mid value',mid)
			return mid
		elif((tmp + mid + 1) == n):
			return mid + 1
		else:
			low = mid + 1
			mid = (low + high) // 2
			return find(low,high,mid,n)
	elif(tmp > n):
#		print('2nd elif')
		if((tmp - mid) <= n):
			return mid - 1
		high = mid - 1
		mid = (low + high) // 2
		return find(low,high,mid,n)
t = int(input())
for i in range(t):
	n = int(input())
	low = 1
	high = n
	mid = (low + high)//2
	print(find(low,high,mid,n))
