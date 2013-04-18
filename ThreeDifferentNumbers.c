    #include<iostream>
    #define m 1000000007;
    using namespace std;
    void Sort(long long int[]);
    int main()
    {
    int T;
    long long int n[3];
    int i;
    cin>>T;
    for(i=0;i<T;i++)
    {
    cin>>n[0]>>n[1]>>n[2];
    Sort(n);
     
    n[0]=n[0]%m;
    n[1]=(n[1]-1)%m;
    n[2]=(n[2]-2)%m;
    n[0]=(n[0]*n[1])%m;
    cout<<(n[0]*n[2])%m;
    cout<<endl;
     
     
    /*N[0]=(N[0]%max*(N[1]%max-1)%max)%max;
    cout<<(N[0]%max*(N[2]%max-2)%max)%max<<endl;*/
    }
    return 0;
    }
    void Sort(long long int arr[])
    {
    long long a;
    int j,k;
    for(j=0;j<2;j++)
    {
    for(k=j+1;k<3;k++)
    {
    if(arr[k]<arr[j])
    {
    a=arr[j];
    arr[j]=arr[k];
    arr[k]=a;
    }
    }
    }
    } 
