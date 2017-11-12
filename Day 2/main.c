#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double mealCost, totalCost, tip, tax;
    int tipPercent, taxPercent;
    
    scanf("%lf %d %d", &mealCost, &tipPercent, &taxPercent);
    
    tip = mealCost * tipPercent / 100;
    tax = mealCost * taxPercent / 100;
    totalCost =  mealCost + tip + tax;
    
    printf("The total meal cost is %.0lf dollars.", totalCost);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
