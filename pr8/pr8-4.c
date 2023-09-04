#include<stdio.h>

int stringLength(const char *str){
	
    const char *po = str; 

    while (*po != '\0'){
        po++; 
    }

    return (int)(po - str);
}

main(){
	
    char string[100];

    printf("Enter a string = ");
    scanf("%s",string);

    int length = stringLength(string);

    printf("Length of the string :- %d\n",length);

}