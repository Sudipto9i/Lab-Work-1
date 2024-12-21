#include <stdio.h>

int main() {
    float income, tax;
    printf("Enter the income: ");
    scanf("%f", &income);
    if (income <= 150000) {
        tax = 0;
    } else if (income <= 300000) {
        tax = (income - 150000) * 0.10;
    } else if (income <= 500000) {
        tax = (income - 300000) * 0.20 + 15000; // 15000 is the tax for the first 300000
    } else {
        tax = (income - 500000) * 0.30 + 55000; // 55000 is the tax for the first 500000
    }
    printf("The tax is: %.2f\n", tax);
    return 0;
}
