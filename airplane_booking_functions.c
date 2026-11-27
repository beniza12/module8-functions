#include <stdio.h>

float calculateFare(char travelClass){
    float baseFare;
    if(travelClass == 'E' || travelClass == 'e'){
        baseFare =2500.00;
    }if(travelClass == 'B' || travelClass == 'b'){
        baseFare =6500.00;
    }
    return baseFare;
}

float checkBaggage(char travelClass, float baggageWeight){
    float excessFee;
    float allowance;
    
    if(travelClass == 'B' || travelClass == 'b'){
        allowance = 40;
            if(baggageWeight <= allowance){
                excessFee = 0;
            } else{
                excessFee = (baggageWeight - allowance)*150;
            }

    } if(travelClass == 'E' || travelClass == 'e'){
        allowance = 20;
        if(baggageWeight <= allowance){
            excessFee = 0;
        }else{
            excessFee = (baggageWeight - allowance)*150;
        }
    }
    return excessFee;
}


void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee){
    float allowance;
    float totalFare;
    baseFare = calculateFare(travelClass);
    excessFee = checkBaggage(travelClass, baggageWeight);
    totalFare = baseFare + excessFee;
    
    if(travelClass == 'B' || travelClass == 'b'){
        printf("Travel Class: Business\n");
        printf("Base Fare: Php %.2f\n",baseFare);
        printf("Baggage Weight: %.2f kg", baggageWeight);
        printf("(Allowance: 40 kg)\n");
        printf("Excess Baggage Fee: Php %.2f\n", excessFee);
        printf("Total Fare: Php %.2f", totalFare);
        
    } else if(travelClass == 'E' || travelClass == 'e'){
        printf("Travel Class: Economy\n");
        printf("Base Fare: Php %.2f\n",baseFare);
        printf("Baggage Weight: %.2f kg", baggageWeight);
        printf("(Allowance: 20 kg)\n");
        printf("Excess Baggage Fee: Php %.2f\n", excessFee);
        printf("Total Fare: Php %.2f", totalFare);
} else{
        printf("Invalid input");
}
}
int main(){

    char travelClass;
    float baggageWeight;
    float excessFee;
    float baseFare;

    printf("Enter travel class (E-conomy/ B-usiness): ");
    scanf("%c",&travelClass);

    printf("Enter Baggage Weight: ");
    scanf("%f",&baggageWeight);

    excessFee = checkBaggage(travelClass,baggageWeight);
    

    printf("- - - - Boarding Summary - - - -\n\n");
    printTicket(travelClass,baggageWeight,baseFare,excessFee);
    printf("\n\n- - - - - - - - - - - - - - - - - ");
    
return 0;
}
