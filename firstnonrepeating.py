str = input()
l = []
for i in str:
	if i not in l:
		l.append(i)
	else:
		l.remove(i)
if len(l) > 0:
	print(l[0])
else:
	print("-1")
