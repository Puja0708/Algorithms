#include<stdio.h>
#include<math.h>

long gcd(long , long);
void Divbygcd(long,long);
long C(int,int);


int main()
{
  int T,n,i,k,ans;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		if(n==1)
			{
			ans=26;
		
			}
			else if((n%2)==0)
			{
				k = n/2;
			}
			else
			{
				k = (n/2)+1;
			}
		
			
			
			for(i=0;i<k;i++)
			{
				ans = ans + C(26,i) ;
			}
	}		
		printf("%d",ans);
		
	}

	return 0;
}


long gcd(long a,long b) { 
	if (a%b==0) return b;
 else
 return gcd(b,a%b); 
} 

void Divbygcd(long &a,long &b) { 
	long g=gcd(a,b); 
	a/=g; 
	b/=g; 
} 

long C(int n,int k){ 
	long numerator=1,denominator=1,toMul,toDiv,i; 
	if (k>n/2) k=n-k;
	for (i=k;i;i--) { 
	toMul=n-k+i; 
	toDiv=i; 
	Divbygcd(toMul,toDiv); 
	Divbygcd(numerator,toDiv); 
	Divbygcd(toMul,denominator); 
	numerator*=toMul; 
	denominator*=toDiv; 
	} 
return numerator/denominator; 
} 
