#include<stdio.h>

main(){
	
	int row, col;
	char count = 'A';
	
	for(row = 1; row <= 5; row++){
		
		
		
		for(col = 1; col <= row; col++){
			
			printf(" %c ",count);
			count++;
			
		}
		
		printf("\n");
		
	}
	
}
