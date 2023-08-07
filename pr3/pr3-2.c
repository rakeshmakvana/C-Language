#include<stdio.h>

main(){
	
	int a = 1, n;
	
	printf("Enter The Number = ");
	scanf("%d",&n);
	
	while(a <= n){
		
		printf(" %d * %d = %d\n",n,a,n*a);
		a++;
		
	}
	
}