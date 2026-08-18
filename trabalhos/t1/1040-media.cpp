#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float n1, n2, n3, n4, exame;
    float media;

    cin >> n1 >> n2 >> n3 >> n4;
    
    media = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10;

    cout << "Media: " << fixed << setprecision(1) <<  media << "\n";
    if(media >= 7) {
        cout << "Aluno aprovado.\n";
    }
    else if(media < 7 && media >= 5) {
        cout << "Aluno em exame.\n";
        cin >> exame;
        media += exame;
        media /= 2;
        cout << "Nota do exame: " << fixed << setprecision(1) << exame << "\n";
        if(media >= 5) {
            cout << "Aluno aprovado.\n";
        }
        else {
            cout << "Aluno reprovado.\n";
        }
        cout << "Media final: " << fixed << setprecision(1) << media << "\n";
    }
    else {
        cout << "Aluno reprovado.\n";
    }
}