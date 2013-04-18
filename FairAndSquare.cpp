#include<iostream>
#include<sstream>
#include<cstring>
#include<cmath>
#include<math.h>
#include<algorithm>
using namespace std;
#define max 1000
int  ispalin[max]={0};
int palin[max]={0};
void preprocess()
 {
int i,count;
  string lStr;

   for (int lIter = 1; lIter <=max; ++lIter )  
    {
         stringstream lStrS;
          lStrS << lIter;
        lStr = lStrS.str();

   string lRevStr = lStr;
   reverse( lRevStr.begin(), lRevStr.end() );

   if ( lRevStr == lStr )
        ispalin[lIter]=1;
   }
for(i=1;i<=sqrt(max);i++)
 {
  if(ispalin[i] && ispalin[i*i])
   palin[i*i]=1;
}
}

int main()
{
preprocess();
 int i,a,b,c,t,uu=1;
 cin>>t;
while(t--)
{
c=0;
cin>>a>>b;
   for(i=a;i<=b;i++)
     if(palin[i])
         c++;
 cout<<"case #"<<uu<<":"<<" "<<c<<endl;
uu++;
}
return 0;
}
 
