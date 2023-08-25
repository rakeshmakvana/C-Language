#include<stdio.h>


main(){
	
	int n;
	
	printf("Enter The Number = ");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0){
		div();		
	}else{
		notdiv();	
	}
	
}


div(){
	
	printf("That is Divisible by 3&5.");
	
}


notdiv(){
	
	printf("That is Not Divisible by 3&5.");
	
}