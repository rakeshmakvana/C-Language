#include<stdio.h>

main(){
	
	char row, col;
	
	for(row = 'E'; row >= 'A'; row--){
		
		for(col = 'D'; col >= row; col--){
			printf("   ");
		}
		
		for(col = 'A'; col <= row; col++){
			printf(" %c ",col);
		}
		
		printf("\n");
		
	}
	
}