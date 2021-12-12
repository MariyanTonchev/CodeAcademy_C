#include <stdio.h>

int main(){
    int iOunces = 0;
    printf("Enter how much ounces you want: ");
    scanf("%d", &iOunces);
    double dCups = iOunces / 8.0;
    printf("You ordered %.2f cups", dCups);
    return 0;
}