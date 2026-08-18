#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char name[100];
    double salary, sales;

    cin >> name;
    cin >> salary;
    cin >> sales;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << (salary + (sales*15/100)) << "\n";
}