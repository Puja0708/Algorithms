    #include<iostream>
    #include <stdio.h>
    using namespace std;
    #define MODULO 1000000007
    typedef long long ll;
    inline int FAST_IO() ;
    ll POWER(ll Vals, ll P, ll MODVal)
    {
    ll Data;
    for(Data = 1; P; P >>= 1)
    {
    if (P & 1)
    Data = (Data * Vals) % MODVal;
    Vals = (Vals * Vals) % MODVal;
    }
    return Data;
    }
    int main()
    {
    int Kases;
    Kases=FAST_IO();
    while(Kases--)
    {
    ll n;
    cin>>n;
    ll Answer = POWER(26,n/2,MODULO);
    Answer = (Answer-1+MODULO)%MODULO;
    ll InvVal = POWER(25,MODULO-2,MODULO);
    Answer = (Answer * InvVal) % MODULO;
    Answer = (Answer * 52)%MODULO;
    if(n%2==1)
    {
    ll po = POWER(26,n/2+1,MODULO);
    Answer = (Answer+ po)%MODULO;
    }
    printf("%lld\n",Answer);
    }
    return 0;
    }
    inline int FAST_IO()
    {
    int xxxx;
    char ch;
    int Negativity=0;
    while (((ch=getchar_unlocked()) < 48 || ch > 57) && ch != '-');
    xxxx=0;
    if (ch == '-') Negativity=1;
    else xxxx = ch-48;
    while ((ch=getchar_unlocked()) >= 48 && ch <= 57) xxxx=xxxx*10+ch-48;
    if (Negativity) return -xxxx;
    else return xxxx;
    } 

Com
