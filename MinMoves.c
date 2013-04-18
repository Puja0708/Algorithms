    #include<stdio.h>
    int min(int[],int);
    int main()
    {
    int T,N,W[10001];
    int i,j,k,x,sum;
    scanf("%d",&T);
    while(T--)
    {
    sum=0;
    scanf("%d",&N);
    for(j=1;j<=N;j++)
    {
    scanf("%d",&W[j]);
    sum = sum+W[j];
    }
    k= min(W,N);
    printf("%d\n",sum-N*k);
    }
    return 0;
    }
    int min(int sal[],int x)
    {
    int minimum,c;
    minimum = sal[1];
    for ( c = 2 ; c <=x ; c++ )
    {
    if (sal[c] < minimum )
    {
    minimum =sal[c];
    }
    }
    return minimum;
    } 
