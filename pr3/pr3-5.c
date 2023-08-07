#include<stdio.h>

main(){
	
	int f = 1, n, a;
	
	printf("Enter The Number = ");
	scanf("%d",&n);
	
	for(a = 1; a <= n; a++){
		
		f = f * a;
	}
	
	printf("Factorial of %d = %d",n,f);
	           
	
}