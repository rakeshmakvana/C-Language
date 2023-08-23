#include<stdio.h>

main(){
	
    char str[100];
    int i;
 
    printf("Enter Any String = ");
    gets(str);


    for(i=0; str[i]!='\0'; i++){
    	
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - 32;
        }
        
    }   
    
    printf("Appar case string:- %s", str);

}