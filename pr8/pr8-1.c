#include<stdio.h>

void swap(int *n1, int *n2){

    int temp = *n1;

    *n1 = *n2;
    *n2 = temp;

}

main(){

    int n1, n2;

    printf("Enter First numbers = ");
    scanf("%d", &n1);
    
    printf("Enter Second numbers = ");
    scanf("%d", &n2);

    printf("Before swapping :- %d, %d\n", n1, n2);

    swap(&n1, &n2);

    printf("After swapping :- %d, %d\n", n1, n2);

}
