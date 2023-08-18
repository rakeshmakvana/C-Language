#include <stdio.h>

main() {
    
    int n , i;
    printf("Enter the number of elements = ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements :-  \n");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is = ");
    
    for (i = 0; i < n; i++) {
        printf("%d.", arr[i]);
    }

    
}
