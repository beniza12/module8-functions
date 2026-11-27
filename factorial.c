#include <stdio.h>

int factorial(int n){
    int mult = 1;
    for(int i = 1; i<=n; i++){
        mult = mult * i;
    } 
    return mult;
}

int main(){
    int n, product;
    
    
    printf("Enter a number: ");
    scanf("%d",&n);

    product = factorial(n);
    

    printf("%d! = %d",n,product);

    return 0;
}
