#include <iostream>

using namespace std;

int main() {
    int hours, minutes, seconds;

    cin >> seconds;
    
    minutes = seconds/60;
    seconds = seconds%60;

    hours = minutes/60;
    minutes %= 60;

    cout << hours << ":" << minutes << ":" << seconds << "\n";
}