#include<stdio.h>
unsigned long long GCD1(unsigned long long a,unsigned long long b)
    {
    unsigned long long t=0;
    while(b>0)
    {
    t=a%b;
    a=b;
    b=t;
    }
    return a;
    }
  
	
    void DIVIDE(unsigned long long &a,unsigned long long &b)
    {
    unsigned long long h=GCD1(a,b);
    a/=h;
    b/=h;
    }
	
	
    int main()
    {
    int t;
    unsigned long long i,n,k,d;
    scanf("%d",&t);
    while(t--)
    {
    scanf("llu",&n);
    scanf("%llu",&k);
    if(k==0 || n==k)
    {
    printf("1\n");
    continue;
    }
    if(k>n)
    {
    printf("0\n");
    continue;
    }
    unsigned long long num1=1,den=1,mul,div;
    if(k>n/2)k=n-k;
    for(i=k;i;i--)
    {
    mul=n-k+i;
    div=i;
    DIVIDE(mul,div);
    DIVIDE(mul,den);
    DIVIDE(num1,div);
    num1*=mul;
    den*=div;
    }
    printf("%llu\n",num1/den);
    }
    return 0;
    }
