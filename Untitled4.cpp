#include<stdio.h>
int loop(int x);

main()
{
	int no,k;
	
	printf("Enter the number :=");
	scanf("%d",&no);
	
	k=loop(no);
	
	printf("sum is :%d",k);
}
int loop(int x)
{
	int i,sum=0;
	
	for(i=1;i<=x;i++)
	{
		sum=sum+i;
	}
	return sum;
}