import csv
import sys

t = raw_input()
while t--
    n = input()
    for j in xrange(n)
        a=0
        b=a+1
        exit=False

#a loop
        for x in xrange(n):
            a+=1
            b=a+1
            c=b+1
    #b loop
            for y in xrange(n):
                b+=1            
                if(n-b-a < 0):
                    break
                c = n-a-b
                if(a**2 + b**2 == c**2):    
                        print "The number is ", a*b*c
                        x=n
                        exit = True
                else:
                        print "A is ", a ,".\n B is ", b, ".\n  C is ",c,"."
                if exit:
                        break
            if exit:
                    break
