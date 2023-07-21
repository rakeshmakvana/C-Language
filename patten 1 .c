#include<stdio.h>
main()
{
	int i,j,no;
	
	printf("Enter the number:");
	scanf("%d",&no);
	
	for (i=no;i>=1;i--)
	{
		for(j=no;j>=i;j--)0
		{
			printf("  %d",j);
		}
		printf("\n");
	}
}