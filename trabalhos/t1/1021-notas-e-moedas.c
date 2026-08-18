#include <stdio.h>

int main() {
    int monetaryValue[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    int monetaryAmmount[(sizeof(monetaryValue)/sizeof(monetaryValue[0]))] = {0};
    
    float division_rest;
    int value;
    float readed_value;

    scanf("%f", &readed_value);
    division_rest = readed_value;

    value = (int)(readed_value*100);

    for(int i=0; i<(sizeof(monetaryValue)/sizeof(monetaryValue[0])); i++) {
        if(
            value / monetaryValue[i] > 0
        ) {
            monetaryAmmount[i] = value/monetaryValue[i];
            value%=monetaryValue[i];
        }
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", monetaryAmmount[0]);
    printf("%d nota(s) de R$ 50.00\n", monetaryAmmount[1]);
    printf("%d nota(s) de R$ 20.00\n", monetaryAmmount[2]);
    printf("%d nota(s) de R$ 10.00\n", monetaryAmmount[3]);
    printf("%d nota(s) de R$ 5.00\n", monetaryAmmount[4]);
    printf("%d nota(s) de R$ 2.00\n", monetaryAmmount[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", monetaryAmmount[6]);
    printf("%d moeda(s) de R$ 0.50\n", monetaryAmmount[7]);
    printf("%d moeda(s) de R$ 0.25\n", monetaryAmmount[8]);
    printf("%d moeda(s) de R$ 0.10\n", monetaryAmmount[9]);
    printf("%d moeda(s) de R$ 0.05\n", monetaryAmmount[10]);
    printf("%d moeda(s) de R$ 0.01\n", monetaryAmmount[11]);
}