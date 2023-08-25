#include<stdio.h>


main(){

	int n;
	
	printf("Enter The Number = ");
	scanf("%d",&n);
	
	cube(n);
	
}


cube(int n){
	
	int ans = n*n*n;
		
	printf("The Cube is %d = %d",n,ans);
		
}