    #include<stdio.h>
     
    #define mod 1000000007
     
    unsigned long long int frPow[10000001] ;
     
    unsigned long long int twen6 (int n){
     
    if(n<=10000000)
    return(frPow[n]) ;
     
    else{
    unsigned long long int part = twen6(n/2) ;
     
    if(n%2)
    return(((part*part)%mod*26)%mod) ;
    else
    return((part*part)%mod) ;
    }
     
    }
     
    int main(){
     
    int index ;
     
    frPow[0] = 1 ;
    for(index=1;index<=10000000;index++)
    frPow[index] = (frPow[index-1]*26)%mod ;
     
     
    int T ;
     
    scanf("%d",&T) ;
     
    int N ;
     
    unsigned long long int ans ;
    /*
    for(index=1;index<=10;index++)
    printf("%d\n",frPow[index]) ;
    */
    while(T--){
    scanf("%d",&N) ;
     
    if(N%2){
    ans = (((27 * twen6((N+1)/2))%mod + mod - 52 )%mod * 280000002)%mod ;
    }else{
    ans = ((2 * (twen6((N+2)/2) + mod - 26))%mod* 280000002)%mod ;
    }
    printf("%llu\n",ans) ;
    }
     
    } 
