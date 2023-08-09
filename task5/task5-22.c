#include<stdio.h>

main(){
	
	char row, col;
	
	for(row = 'A'; row <= 'O'; row++){
		
		for(col = 'A'; col <= row; col++){
			printf(" %c ",col);
		}
		
		printf("\n");
		
	}
	
}