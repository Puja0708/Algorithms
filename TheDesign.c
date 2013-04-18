#include<stdio.h>
#include<math.h>
#define s(x) scanf("%d",&x);

int main()
{
  
	int t,n[20],k,i,W[20];
	s(t);
	while(t--)
	{
		s(n[t]);
		k= n[t]/2+1;
		W[t]= ((k*(k+1))-1);
		printf("%d\n",W[t]);
		
		

		/*
		res=1;
		if(n==1)
		{
			res=1;
		}
			else
			{

				for(i=2;i<=k;i++)
					res = res+(2*i);
				
			}*/
		
		//printf("%d",res);
	}


	/*while(t--)
	{
		k= n[t]/2+1;
		W[t]= ((k*(k+1))-1);
		printf("%d",W[t]);
		
		//printf("%d\n",W[t]);
	}*/


	return 0;
}
