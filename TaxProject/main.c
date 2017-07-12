#include <stdio.h>
#include <stdlib.h>

int main()
{
    double income, net, tax;
    printf("Enter your income: ");
    scanf("%lf", &income);
    if (income<10,000){
        printf("The tax you pay is: 0.0");
        printf("your net income is: %lf", income);

    }
    else if (income>10,000 && income<20,000){
        printf("The tax you pay is: 0.1");
        tax = income * 0.10;
        net = income - tax;
        printf("your net income is: %lf\n", net);

    }
    else if (income>20,000 && income<50,000){
        printf("The tax you pay is: 0.2");
        tax = income * 0.2;
        net = income - tax;
        printf("your net income is: %lf\n", net);
    }
    else
        printf("Your income and tax will be determined at a later date");
    return 0;
}
