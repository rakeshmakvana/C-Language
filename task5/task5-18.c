#include<stdio.h>

main(){
	
	int row, col;
	
	for(row = 1; row <= 5; row++){
		
		for(col = 1; col <= row; col++){
			if(col % 2 == 0){
				printf(" 1");
			}else{
				printf(" 0");
			}
		}
		
		printf("\n");
		
	}
	
}