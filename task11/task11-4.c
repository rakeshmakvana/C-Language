#include<stdio.h>

main(){
	
   char s[100], r[100];
   int begin, end, count = 0;

   printf("Enter a string = ");
   gets(s);


   for(count=0; s[count]!='\0'; count++){
   	

   }
      
   end = count - 1;

   for(begin=0; begin<count; begin++){
   	
      r[begin] = s[end];
      end--;
      
   }

   r[begin] = '\0';

   printf("The Reverse string is :- %s", r);

}