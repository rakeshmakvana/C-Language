#include<stdio.h>

main(){
	
	int a = 0, n;
	
	printf("Enter The Number = ");
	scanf("%d",&n);
	
	while(n != 0){
		
		n /= 10;
		a++;
		
	}
	
	printf("Number Of Digits = %d",a);
	           
	
}
 