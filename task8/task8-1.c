#include <stdio.h>

main() {
    
    int n, i;
    
    printf("Enter the number of values = ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the values :- \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Values in reverse order :- \n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    
}