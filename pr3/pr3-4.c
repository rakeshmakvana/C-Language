#include<stdio.h>

main(){
	
	int sum = 0, n, fr, ls;
	
	printf("Enter The Number = ");
	scanf("%d",&n);
	
	ls = n % 10;
	
	while(n >= 10){
		
		n = n / 10;
				
	}
	
	fr = n;
	
	sum = fr + ls;
	
	printf("Sum of First and Last Digits = %d",sum);
	           
	
}