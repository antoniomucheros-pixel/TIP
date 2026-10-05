#include <iostream>
using namespace std;

int main() {
    double k, b, t;
    
    cout << "Введи коэффициент при t: ";
    cin >> k;
    
    cout << "Введи свободный член: ";
    cin >> b;
    
    cout << "Введи значение t: ";
    cin >> t;
    
    // Тут уже упрощённая формула:0.7t + 11.6
    double res = k * t + b;
    
    cout << "Ответ: " << res << endl;
    
    return 0;
}




