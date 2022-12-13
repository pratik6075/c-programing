#include<stdio.h>
main()
{
    int marks;
	printf("enter value :");
	scanf("%d",&marks);
	
	if(marks>80 && marks<=100)
	{
		printf("value of marks is : %d",marks);
	}
	else if(marks>60 && marks<=80)
	{
		printf("value of marks is : %d",marks);
	}
	else if(marks>30 && marks<=60)
	{
		printf("value of marks is : %d",marks);
	}
	else
	    printf("fail");
	    
}
