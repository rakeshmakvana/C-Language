#include<stdio.h>
main()
{
	int i,j,no;
	
	printf("Enter the number:");
	scanf("%d",&no);
	
	for (i=1;i>=no;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
		for (i=1;i<=no;i++)
	{
		for(j=no;j>=i;j--)
		{
			printf(" *");
		}
		printf("\n");
	}
}