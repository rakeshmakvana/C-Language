#include<stdio.h>

int addition(int x,int y);

main()
{
	int no1,no2,k;
	
	printf("Enter the number 1 :=");
	scanf("%d",&no1);
	
	printf("Enter the number 2 :=");
	scanf("%d",&no2);
	
	k=addition(no1,no2);
	
	printf("sum is :=%d",k);
}
int addition(int x,int y)
{
	int add;
	
	add=x+y;
	
	return add;
}