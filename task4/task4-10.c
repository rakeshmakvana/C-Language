#include <stdio.h>

main()  
{  
    int num, count = 1;  

    printf("Enter number = ");  
    scanf("%d", &num);  
 
    while(count <= 10)  
    {  
        printf("%d x %d = %d\n", num, count, (num*count));  
        count++;  
    }  

}  