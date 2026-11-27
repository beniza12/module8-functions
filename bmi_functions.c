
#include <stdio.h>

float calculateBMI(float height, float weight){
   return weight / (height * height);
   
}

void categorizeBMI(float bmi){
    /*Underweight below 18.5, Normal 18.5–24.9, Overweight 25.0–29.9, Obese 30.0 and above*/
     if(bmi>=30.0){
        printf("Obese");
    } else if(bmi>=25.0){
         printf("Overweight");
    } else if(bmi>=18.5){
         printf("Normal");
    }else{
         printf("Underweight");
    }
   
}


int main() {
    float height, weight;
    
    printf("Enter height: ");
    scanf("%f",&height);

    printf("Enter weight: ");
    scanf("%f",&weight);
    float bmi = calculateBMI(height, weight);
    
    printf("BMI : %.2f\n", bmi);
    printf("Category: ");
    categorizeBMI(bmi);
    
    return 0;
}
