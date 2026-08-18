#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> monetaryValue = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    vector<int> monetaryAmmount;
    
    float division_rest;
    int value;
    float readed_value;

    cin >> readed_value;
    division_rest = readed_value;

    value = (int)(readed_value*100);

    for(int i=0; i<monetaryValue.size(); i++) {
        if(value / monetaryValue[i] > 0) {
            monetaryAmmount.push_back(value/monetaryValue[i]);
            value%=monetaryValue[i];
        }
        else {
            monetaryAmmount.push_back(0);
        }
    }

    cout << "NOTAS:" << "\n";
    cout << monetaryAmmount[0] << " nota(s) de R$ 100.00" << "\n";
    cout << monetaryAmmount[1] << " nota(s) de R$ 50.00" << "\n";
    cout << monetaryAmmount[2] << " nota(s) de R$ 20.00" << "\n";
    cout << monetaryAmmount[3] << " nota(s) de R$ 10.00" << "\n";
    cout << monetaryAmmount[4] << " nota(s) de R$ 5.00" << "\n";
    cout << monetaryAmmount[5] << " nota(s) de R$ 2.00" << "\n";
    cout << "MOEDAS:" << "\n";
    cout << monetaryAmmount[6] << " moeda(s) de R$ 1.00" << "\n";
    cout << monetaryAmmount[7] << " moeda(s) de R$ 0.50" << "\n";
    cout << monetaryAmmount[8] << " moeda(s) de R$ 0.25" << "\n";
    cout << monetaryAmmount[9] << " moeda(s) de R$ 0.10" << "\n";
    cout << monetaryAmmount[10] << " moeda(s) de R$ 0.05" << "\n";
    cout << monetaryAmmount[11] << " moeda(s) de R$ 0.01" << "\n";
}