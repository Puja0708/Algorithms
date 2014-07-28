#the best way
s=0
for x in range(20):
	s+=x

#the basic way
s=sum(range(10))

#the basic way
s=1
for x in range(1,10):
	x=s*x

#the other way
from operator import mul
reduce(mul, range(1,10))
