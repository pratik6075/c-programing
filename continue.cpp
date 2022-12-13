#include<stdio.h>
main()
{
	int i;
	for(i=0;i<11;i++)
	{
		if((i==3) || (i==8))
		{
			continue;
		}
		printf("value of i is =%d\n",i);
	}
}
