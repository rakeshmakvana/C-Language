#include<stdio.h>

main(){
	
    int n;
   
    printf("Enter the number of elements in the array = ");
    scanf("%d",&n);

    int arr[n], i;

    int *po = arr; 
    printf("Enter %d elements :-\n", n);

    for (i = 0; i < n; i++){
        scanf("%d", po + i); 
    }
   
    printf("Array elements are :- ");
    
    for (i = 0; i < n; i++){
        printf("%d.", *(po + i)); 
    }
    
    printf("\n");

}