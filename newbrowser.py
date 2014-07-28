t=input();
for i in range(t):
	count =0;
	web=raw_input();
	l=len(web);
	wa = list(web);
	for i in range(1,l):
		if((wa[i] == 'a') +(wa[i] == 'e') +(wa[i] == 'i') +(wa[i] == 'o') +(wa[i] == 'u')):
			count=count+1;
	nl=l-count-3;
	arr= [nl,'/',l];
	print ''.join(str(x) for x in arr)
