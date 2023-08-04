 #include<stdio.h>

main(){
	
	int number;
	
	printf("Enter Number = ");
	scanf("%d",&number);
	
	switch(number){
		
		case 1 :
				printf("The Lenguage is Gujrati");
				break;
				
		case 2 :
				printf("The Lenguage is Hindi");
				break;
				
		case 3 :
				printf("The Lenguage is English");
				break;
				
		default :
				printf("Retrun to Home...");
				break;
		
		}
	
}