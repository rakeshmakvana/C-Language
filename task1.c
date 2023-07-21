#include<stdio.h>

main(){
	
	
	//1
	printf("\n\t(1)\n\n");
	printf("\t\t*\t\t*\n\n");
	printf("\t*\t\t*\n\n");
	printf("*\t\t*\n\n");
	printf("\t*\t\t*\n\n");
	printf("\t\t*\t\t*\n\n");
	
	
	//2
	printf("\n\t(2)\n\n");
	printf(" \t*\t*\t*\t*\t*\t*\t*\n\n\n\n");
	printf("*\t*\t*\t*\t*\t*\t*\t*\n\n");
	printf("*\t \t*\t \t \t \t \t*\n\n");
	printf("*\t \t*\t \t*\t*\t*\t*\n\n");
	printf("*\t \t*\t \t*\t \t*\t*\n\n");
	printf("*\t*\t*\t*\t*\t*\t*\t*\n\n");
	
	
	
	//3
	printf("\n\t(3)\n\n");
	
	int a = 23, b =39;
	printf("after swaping a=%d , b=%d",a,b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nbefor swaping a=%d , b=%d\n\n",a,b);
	
	
	
	//4
	printf("\n\t(4)\n\n");
	
	float f, c;
	
	printf("Enter Celsius = ");
	scanf("%f",&c);
	
	f = (9/5*c)+32;
	
	printf("celsious is %.0f , Fehrenehit (9/5*c)+32 = %f\n\n",c,f);
	
	
	
	//5
	printf("\n\t(5)\n\n");
	
	float gs, bs, hra, da, ta;
	
	printf("ENTER BASE SALARY = ");
	scanf("%f",&bs);
	
	hra = bs*10/100;
	da = bs*5/100;
	ta = bs*8/100;
	
	gs = bs+hra+da+ta;
	
	printf("GROSS SALARY = BASH SALARY + HRA + DA + TA = %f\n\n",gs);
	
	
	
}