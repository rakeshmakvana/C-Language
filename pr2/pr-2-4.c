#include<stdio.h>

main(){
		
	char day;
	
	printf("Enter the First Letter of The Day = ");
	scanf("%c", &day);
	
	switch(day){
		
		case 'M':
		case 'm':	
			printf("Monday");
			break;
			
		case 'T':
		case 't':	
			printf("Tuesday\n");
			printf("Thursday\n");
			break;
			
		case 'W':
		case 'w':	
			printf("Wenesday");
			break;
			
		case 'F':
		case 'f':	
			printf("Friday");
			break;
			
		case 'S':
		case 's':	
			printf("Saturday\n");
			printf("Sunday\n");
			break;				
			
		default :
			printf("Day is Not Vaild");
			break;	
			
	}
}