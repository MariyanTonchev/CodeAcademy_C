#include <stdio.h>

int main() {
   double dUserWeightOnEarth = 0.0;
   printf("Please, enter your weight: ");
   scanf("%lf", &dUserWeightOnEarth);
   double dUserWeightOnMoon = dUserWeightOnEarth * 0.17;
   printf("Your weight on the Moon will be: %.3f kg", dUserWeightOnMoon);
   return 0;
}