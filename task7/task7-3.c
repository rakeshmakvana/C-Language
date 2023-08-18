#include <stdio.h>

main(){
    
    int arr[] = {1, 2, 3, 4, 5}, sum=0, i;
    
    int length = sizeof(arr) / sizeof(arr[0]);
       
    for (i = 0; i < length; i++) {
        sum += arr[i];
    }

    float average = sum / length;

    printf("The average of the array is = %.2f", average);

}