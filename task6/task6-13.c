#include<stdio.h>

main(){
	
	char row, col;
	
	for(row = 'A'; row <= 'E'; row++){
		
		for(col = 'D'; col >= row; col--){
			printf("   ");
		}
		
		for(col = row; col >= 'A'; col--){
			printf(" %c ",col);
		}
		
		printf("\n");
		
	}
	
}