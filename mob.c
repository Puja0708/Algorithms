#include<stdio.h>
#include<string.h>

#define max 100




int main()
{
  char  array[100];
	char c;
	int i;
	for(i=0;i<100;i++)
	{
		scanf("%c",&array[i]);
		//printf("%c",array[i]);
		if(array[i]== '\0')
		{
			break;
		}

	}

	for(i=0;i<100;i++)
	{

		c=array[i];

		if(c=='a')
	{
		printf("2");
	}
	else if (c=='b')
	{
		printf("22");
	}
	else if (c=='c')
	{
		printf("222");
	}
	else if (c=='d')
	{
		printf("3");
	}
	else if (c=='e')
	{
		printf("33");
	}
	else if (c=='f')
	{
		printf("333");
	}
	else if (c=='g')
	{
		printf("4");
	}
	else if (c=='h')
	{
		printf("44");
	}
	else if (c=='i')
	{
		printf("444");
	}
	else if (c=='j')
	{
		printf("5");
	}
	else if (c=='k')
	{
		printf("55");
	}
	else if (c=='l')
	{
		printf("555");
	}
	else if (c=='m')
	{
		printf("6");
	}
	else if (c=='n')
	{
		printf("66");
	}
	else if (c=='o')
	{
		printf("666");
	}
	else if (c=='p')
	{
		printf("7");
	}
	else if (c=='q')
	{
		printf("77");
	}
	else if (c=='r')
	{
		printf("777");
	}
	else if (c=='s')
	{
		printf("7777");
	}
	else if (c=='t')
	{
		printf("8");
	}
	else if (c=='u')
	{
		printf("88");
	}
	else if (c=='v')
	{
		printf("888");
	}
	else if (c=='w')
	{
		printf("9");
	}
	else if (c=='x')
	{
		printf("99");
	}
	else if (c=='y')
	{
		printf("999");
	}
	else if (c=='z')
	{
		printf("9999");
	}
	else if (c==' ')
	{
		printf("0");
	}
		//printf("%c",array[i]);
		
	}

}
