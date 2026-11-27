
#include <stdio.h>

    void tryToDouble(int num){
        int doubledValue = num * 2;
        printf("Inside tryToDouble, doubled value = %d\n", doubledValue);
    }
   

int main() {
   int num;
    printf("Before calling tryToDouble: num = ");
    scanf("%d",&num);

    tryToDouble(num);

    printf("After calling tryToDouble: num =%d ",num);
    
    
    return 0;
}
