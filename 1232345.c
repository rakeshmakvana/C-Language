#include<stdio.h>
void abc();
void efg();
void hij();

main()
{
	abc();
}
void abc()
{
	int no1,no2,add;
	
	printf("Enter the number 1 :=");
	scanf("%d",&no1);
	
	printf("Enter the number 2 :=");
	scanf("%d",&no2);
	
	add=no1+no2;
	
	printf("Addition is :=%d\n\n",add);
	
	efg();
}
void efg()
{
	int no1,no2,minus;
	
	printf("Enter the number 1 :=");
	scanf("%d",&no1);
	
	printf("Enter the number 2 :=");
	scanf("%d",&no2);
	
	minus=no1-no2;
	
	printf("minus is :=%d\n\n",minus);
	
	hij();
}
void hij()
{
	int no1,no2,mul;
	
	printf("Enter the number 1 :=");
	scanf("%d",&no1);
	
	printf("Enter the number 2 :=");
	scanf("%d",&no2);
	
	mul=no1*no2;
	
	printf("multipale is :=%d",mul);
}