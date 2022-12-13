#include<stdio.h>
int main (){
	int number1, number2, percentage;
	
	printf("enter two integers:");
	scanf("%d %d",&number1, number2);
	
	//calculating devide
	percentage = number1 * number2;
	
	printf("%d % %d = %d",number1, number2, percentage);
	return 0;
}
