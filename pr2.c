#include<stdio.h>
int loop();

main()
{
	int k;
	k=loop();
	printf("sum is :=%d",k);
}
int loop()
{
	int i,no,sum=0;
	
	printf("Enter the number :=");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		sum=sum+i;
	}
	return sum;
}