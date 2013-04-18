    #include<stdio.h>
    int main()
    {
    float Y,z;
    int X;
    scanf("%d%f",&X,&Y);
    if((X<=(Y-0.5)) && (X%5==0))
    {
    z = ((Y-X)-0.50);
     
    }
    else
    {
    z = Y;
    }
     
    printf("%.2f\n",z);
    return 0;
    } 
