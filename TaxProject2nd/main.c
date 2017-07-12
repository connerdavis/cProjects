#include <stdio.h>
#include <stdlib.h>

int main()
{
    double income, percent, tax, net;
    printf("Enter your income:");
    scanf("%lf", &income);
    if (income<10,000){
        percent = 0.0;
        tax = income * percent;
    }
    else if(income>10,000 && income<20,000){
        percent = 0.1;
        tax = income * percent;
    }
    else if(income>20,000 && income<50,000){
        percent = .2;
        tax = income * percent;

    }
    else{
        percent = .25;
        tax = income * percent;
        tax = tax + tax * .1;
    }
    net = income - tax;
    if (percent == .25)
        printf("your tax percent is %lf plus .1 ontop of the tax\n", percent);
    else
        printf("your tax percentage is: %ls\n", percent);
    printf("Your tax is: $ %.02lf\n", tax);
    printf("Your net income is: $ %.02lf", net);

    return 0;
}
