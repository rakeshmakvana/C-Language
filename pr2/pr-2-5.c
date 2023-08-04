#include<stdio.h>

main(){
	
	int phy, che, bio, mat, com;
	float total, pr;
	char grade;
	
	printf("Enter the Physics Mark = ");
	scanf("%d", &phy);
	
	printf("Enter the Chemistry Mark = ");
	scanf("%d", &che);
	
	printf("Enter the Biology Mark = ");
	scanf("%d", &bio);
	
	printf("Enter the Mathematics Mark = ");
	scanf("%d", &mat);
	
	printf("Enter the Computer Mark = ");
	scanf("%d", &com);
	
	total = phy + che + bio + mat + com;
	pr = total / 5;
	
	if(pr >= 90){
		grade = 'A';
	}
	else if(pr >= 80){
		grade = 'B';
	}
	else if(pr >= 70){
		grade = 'C';
	}
	else if(pr >= 60){
		grade = 'D';
	}
	else if(pr >= 50){
		grade = 'E';
	}
	else if(pr >= 40){
		grade = 'F';
	}
	else{
		grade = 'G';
	}
	
	printf("Percentag = %.2f\n",pr);
	printf("Grade = %c\n",grade);
	
}