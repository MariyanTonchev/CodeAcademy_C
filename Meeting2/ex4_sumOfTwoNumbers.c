#include <stdio.h>

int addDigit(int a, int b);

int main(){
    int a = 55, b = 150;
    int iSum = addDigit(a, b);
    printf("Sum is: %d", iSum);
    return 0;
}

int addDigit(int a, int b){
    return a + b;
}