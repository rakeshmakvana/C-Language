#include<stdio.h>

main(){
	
	int row, col;
	
	for(row = 1; row <= 5; row++){
		
		for(col = row; col >= 1; col--){
			if(col % 2 == 0){
				printf(" 0");
			}else{
				printf(" 1");
			}
		}
		
		printf("\n");
		
	}
	
}
