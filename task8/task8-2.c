#include <stdio.h>

main() {
    
    int n, i;
    
    printf("Enter the number of elements = ");
    scanf("%d", &n);
    
    int arr1[n];
    int arr2[n];
    
    printf("Enter the elements of the first array :-\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    
    printf("Elements of the second array :- \n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr2[i]);
    }
    
}