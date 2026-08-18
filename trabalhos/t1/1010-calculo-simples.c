#include <stdio.h>

int main() {
    int code1, ammount1, code2, ammount2;
    double price1, price2, total;

    scanf("%d %d %lf", &code1, &ammount1, &price1);
    scanf("%d %d %lf", &code2, &ammount2, &price2);

    total = (ammount1 * price1) + (ammount2 * price2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
}