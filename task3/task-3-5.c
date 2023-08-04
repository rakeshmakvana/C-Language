#include<stdio.h>

main(){
	
	int number;
	
	printf("Enter Month Number = ");
	scanf("%d",&number);
	
	switch(number){
		
		case 1 :
				printf("Month is Janyuary");
				break;
				
		case 2 :
				printf("Month is February");
				break;
				
		case 3 :
				printf("Month is March");
				break;
				
		case 4 :
				printf("Month is April");
				break;
				
		case 5 :
				printf("Month is May");
				break;
				
		case 6 :
				printf("Month is June");
				break;				
		
		case 7 :
				printf("Month is Julay");
				break;
				
		case 8 :
				printf("Month is Aagust");
				break;
				
		case 9 :
				printf("Month is Saptember");
				break;
				
		case 10 :
				printf("Month is Octomber");
				break;
				
		case 11 :
				printf("Month is Navember");
				break;
				
		case 12 :
				printf("Month is Decembar");
				break;
				
		default :
				printf("Month is Not Valide");
				break;
		
		}
	
}