#include <stdio.h>

main(){
	
    int n, i, sum = 0;

    printf("Enter Number = ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        ++i;
    }

    printf("Sum = %d", sum);

}