#include <stdio.h>

main()
{
    int n,i,f;

    f=i=1;

    printf("Enter Number =");
    scanf("%d",&n);

    while(i<=n)
    {
        f*=i;
        i++;
    }

    printf("The Factorial of %d is : %d ",n,f);

}