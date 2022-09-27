#include <stdio.h>

int main(void) {
    float gross_wage;
    float net_wage;
    float inss_discount;
    float income_tax;

    printf("Insert gross wage value: ");
    scanf("%f", &gross_wage);
    
    if (gross_wage < 1045.01) {
        inss_discount = gross_wage * 0.075;
    } else if (gross_wage < 2089.61) {
        inss_discount = gross_wage * 0.09;
    } else if (gross_wage < 3134.61) {
        inss_discount = gross_wage * 0.12;
    } else {
        inss_discount = gross_wage * 0.14;
    }

    if (gross_wage < 1903.99) {
        income_tax = 0;
    } else if (gross_wage < 2826.66) {
        income_tax = gross_wage * 0.075;
    } else if (gross_wage < 3751.06) {
        income_tax = gross_wage * 0.15;
    } else if (gross_wage < 4664.68) {
        income_tax = gross_wage * 0.225;
    } else {
        income_tax = gross_wage * 0.275;
    }

    net_wage = gross_wage - inss_discount - income_tax;
    printf("Gross wage: %.2f. Net wage: %.2f.\n", gross_wage, net_wage);
}
