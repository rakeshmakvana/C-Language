#include <stdio.h>

main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("The length of the array is = %d", length);

}
