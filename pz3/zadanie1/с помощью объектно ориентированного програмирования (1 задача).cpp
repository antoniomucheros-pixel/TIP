#include <iostream>
#include <helpFileTask1.h>
using namespace std;

int main() {
    int a,b,c = 0;
    cout << "1 number: ";
    cin >> a;
    cout << "2 number: ";
    cin >> b;

    c = hypotenuse(a,b);
    cout << "Hypotenuse: " << c;

}
