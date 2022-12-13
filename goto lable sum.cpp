#include<stdio.h>
main()
{
	int n,sum=0,i=0;
	printf("enter number : ");
	scanf("%d",&n);
	
	lable:
		i++;
		sum+=i;//sum=sum+i; 0=0+1=1
		
		if(i<n)//1<5
		goto lable;
		
		printf("sum of %d = %d",n,sum);
}

