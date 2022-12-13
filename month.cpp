#include<stdio.h>
main()
{
	int month;
	printf("enter a number:");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
			printf("january");
			break;
			
			case 2:
				printf("february");
				break;
				
				case 3:
					printf("march");
					break;
					
					case 4:
						printf("april");
						break;
						
						default:
							printf("somthing is wrong");					
	}
}
