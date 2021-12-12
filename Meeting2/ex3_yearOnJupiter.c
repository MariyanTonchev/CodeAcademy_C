#include <stdio.h>

int main(){
    int iOneYearOnJupiterInDays = 0;
    iOneYearOnJupiterInDays = 3 * 366 + 9 * 365; // 3 високосни години и 9 обикновени години
    printf("Enter number of days: ");
    unsigned long long ullEnteredDays = 0; // забелязах, че на уиндоус стига само до максимума на unsigned long. На линукс мисля, че работи.
    scanf("%d", &ullEnteredDays);
    int iNumberOfYearsOnJupiter = ullEnteredDays / iOneYearOnJupiterInDays;
    int iNumberOfDaysLeft = ullEnteredDays - (iNumberOfYearsOnJupiter * iOneYearOnJupiterInDays);
    printf("%llu days on Earth are %d years and %d days on Jupiter.", ullEnteredDays, iNumberOfYearsOnJupiter, iNumberOfDaysLeft);
    return 0;
}