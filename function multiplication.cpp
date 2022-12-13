#include<stdio.h>
void add();
main()
{
	add();
}

void add()
{
	int num1,num2,ans;
	printf("enter num1: ");
	scanf("%d",&num1);
	
	printf("enter num2: ");
	scanf("%d",&num2);
	
	ans=num1*num2;
	
	printf(" ans = %d",ans);
}
