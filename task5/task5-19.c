#include<stdio.h>

main(){
	
	int row, col, i = 1, r = 1;
	
	for(row = 1; row <= 5; row++){
		
		
		
		for(col = 1; col <= r; col++){
			
			if(i == 10){
				i = 1;
				printf("%d",i);
				i++;
			}
		}
		
		printf("\n");
		
		r *= 2;
		
	}
	
}