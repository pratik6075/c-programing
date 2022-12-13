#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("entervvalue of a : ");
	scanf("%d",&a);
	
	printf("enter value of b : ");
	scanf("%d",&b);
	
	printf("enter value of c : ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is grater");
		}
		else
		{
			printf("c is grater");
		}
    }
		else
	{ 
	   if(b>c)
		{
			printf("b is grater");
		}
		else
		{
			printf("c is grater");
		}
	}
}
