#include<stdio.h>

void rev(int *arr,int size){
	
    int *start = arr; 
    int *end = arr + size - 1;

    while(start < end){
        
        int temp = *start;
        
        *start = *end;
        *end = temp;
       
        start++;
        end--;
    }
}

main(){
	
    int n;

    printf("Enter the number of elements in the array = ");
    scanf("%d",&n);

    int arr[n];
    
    int *po = arr, i; 
    printf("Enter %d elements :-\n", n);

    for(int i = 0; i < n; i++){
        scanf("%d",po + i); 
    }

    rev(arr,n);

    printf("Reversed array elements :- ");
    
    for(i = 0; i < n; i++){
        printf("%d.",*(po + i)); 
    }
    
    printf("\n");

}