#include<stdio.h>

main(){

	char number;
	
	printf("Enter The Number = ");
	scanf("%c", &number);
	
	if(number >= 'a' && number <= 'z' || number >= 'A' && number <= 'Z'){
		printf("This is Alphabet...");
	}
	else if(number >= '0' && number <= '9'){
		printf("This is Digits...");
	}
	else{
		printf("This is Special Charcter...");
	}

}