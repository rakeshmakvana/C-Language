#include<stdio.h>

main(){
	
	int a, b, c;
	
	printf("Enter A = ");
	scanf("%d",&a);
	
	printf("Enter B = ");
	scanf("%d",&b);
	
	printf("Enter C = ");
	scanf("%d",&c);
	
	a > b ? 
		a > c ?
			 printf("A is max...")
		 : 
			 printf("C is max...")
	 : 
		 b > c ?
			 printf("B is max...")
		 : 
			 printf("C is max...");
	
	}}