#include<stdio.h>

float sum(float x, float y){
    return x + y;
}

float sub(float x, float y){
    return x - y;
}

float mul(float x, float y){
    return x * y;
}

float div(float x, float y){
	
    if (y != 0) {
        return x / y;
    } else {
        printf("Cannot divide by zero\n");
        return 0;
    }
    
}

main(){
	
    char choice;
    float num1, num2, result;

    while(1){
    	
        printf("\nSelect operation:\n");
        printf("1. sum(+)\n");
        printf("2. Sub(-)\n");
        printf("3. Mul(*)\n");
        printf("4. Div(/)\n");
        printf("5. Exit.\n");

        printf("Enter choice (1/2/3/4/5): ");
        scanf(" %c",&choice);

        if(choice == '5'){
            printf("Calculator exiting...\n");
            break;
        }

        printf("Enter first number = ");
        scanf("%f",&num1);
        
        printf("Enter second number = ");
        scanf("%f",&num2);

        switch(choice){
        	
            case '1':
                result = sum(num1, num2);
                break;
                
            case '2':
                result = sub(num1, num2);
                break;
                
            case '3':
                result = mul(num1, num2);
                break;
                
            case '4':
                result = div(num1, num2);
                break;
                
            default:
                printf("Invalid input\n");
                continue;
                
        }

        printf("Result:- %.2f\n",result);
        
    }

}
