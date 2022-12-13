#include<stdio.h>
main()
{
	int week;
	printf("enter a number :");
	scanf("%d",&week);
	
	switch(week)
	{
		case 1:
			printf("sunday");
			break;
			
			case 2:
				printf("monday");
				break;
				
				case 3:
					printf("tuseday");
					break;
					
					case 4:
						printf("wenesday");
						break;
						
						default:
							printf("somthing is wrong");
	}
}
