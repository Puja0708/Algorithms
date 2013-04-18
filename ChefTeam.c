    #include<stdio.h>
    unsigned long long gcd(unsigned long long a, unsigned long long b)
    { return b?gcd(b,a%b):a; }
     
    unsigned long long C(unsigned long long n, unsigned long long k) {
    if (k > n) return 0;
    if(n-k<k)
    k=n-k;
    unsigned long long p = 1,i;
    for ( i = 1; i <= k; ++i) {
    unsigned long long g = gcd(p,i);
    p /= g;
    p *= (n-i+1)/(i/g);
    }
    return p;
    }
    int main() {
    int t;
    scanf("%d",&t);
    while (t--) {
    unsigned long long n, k;
    scanf("%llu %llu",&n,&k);
    printf("%llu\n",C(n,k));
    }
    return 0;
    } 
