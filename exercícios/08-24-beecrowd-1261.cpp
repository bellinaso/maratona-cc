#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    map<string, int> hay_points;

    for (int i = 0; i < m; i++) {
        string nome;
        int price;

        cin >> nome >> price;

        hay_points[nome] = price;
    }

    string linha;

    getline(cin, linha);

    for (int i = 0; i < n; i++) {
        int valor = 0;

        while (getline(cin, linha) && linha != ".") {
            stringstream ss(linha);
            string palavra;

            while (ss >> palavra) {
                if (hay_points.count(palavra)) {
                    valor += hay_points[palavra];
                }
            }
        }

        cout << valor << endl;
    }

    return 0;
}