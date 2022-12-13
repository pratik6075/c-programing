#include<stdio.h>
main()
{
 int age;
 printf("enter your age :");
 scanf("%d",&age);
 if (age>=14)
 {
 	if (age>=18)
 	{
 	printf("you are adult");
	}
 else
 {
 	printf("you are a tenager");
 }
 }
 else 
 {
 	if (age<=5)
 {
 	printf("you are child");
 		
 }
 else 
 {
 	printf("somthing went wrong");
 		
 }
 }
}
