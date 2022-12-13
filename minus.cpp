#include<stdio.h>
int main(){
	int number1, number2, minus;
	printf("enter two integers:");
	
	scanf("%d %d", &number1, &number2);
	
	//calculating minus
	minus = number1 - number2;
	
	printf("%d - %d = %d",number1,number2,minus);
	return 0;
	
}
