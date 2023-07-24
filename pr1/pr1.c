#include<stdio.h>

main(){
	
	
	//1
	int a, b;
	
	printf("1\nEnter A = ");
	scanf("%d",&a);
	
	printf("Enter B = ");
	scanf("%d",&b);
	
	if(a > b){
		printf("B is Minimum...");
	}else{
		printf("A is Minimum\n\n\n");
	}
	
	
	//2
	printf("2\nEnter A = ");
	scanf("%d",&a);
	
	if(a > 1){
		printf("A is Not Neutral...");
	}else if(a == 0){
		printf("A is Neutral...");
	}else{
		printf("A is Not Neutral...");
	}
	
}