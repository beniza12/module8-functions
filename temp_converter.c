
#include <stdio.h>

float celciusToFahrenheit(float c){
    return (9.00/5.00*c) + 32;
}

float fahrenheitToCelcius(float f){
    return (5.00/9.00*f) - 32 ;
}
   

int main() {
    float c , f;
    int choice;

    printf("1 - Celcius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celcius \n");
    
    printf("Choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Enter Celcius value: ");
        scanf("%f",&c);

        printf("%.2f C = %.2f F", c,celciusToFahrenheit(c));
        break;

        case 2:
        printf("Enter Fahrenheit value: ");
        scanf("%f",&f);

        printf("%.2f F = %.2f C", f,fahrenheitToCelcius(f));
        break;

        default:
        printf("Invalid choice");
        
        
    }

    
    return 0;
}
