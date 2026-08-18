#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distance = 0, media = 0, count = 0;
    string name;

    while(getline(cin, name)) {
        cin >> distance;
        cin.ignore();
        media += distance;
        count++;
    }

    media/=count;
    
    cout << fixed << setprecision(1);
    cout << media << "\n";
}