#include<stdio.h>

main(){
	
	int row, col;
	
	for(row = 1; row <= 5; row++){
		
		for(col = row; col <= 5; col++){
			printf(" %d ",row);
		}
		
		printf("\n");
		
	}
	
}