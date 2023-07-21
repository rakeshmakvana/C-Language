#include<stdio.h>

int addition();

main()
{
	int k;
	k=addition();
	printf("addition is :=%d",k);
}
int addition()
{
	int no1,no2,add;
	
	printf("Enter the number 1:=");
	scanf("%d",&no1);
	
	printf("Enter the number 2:=");
	scanf("%d",&no2);
	
	add=no1+no2;
	
	return add;
}
