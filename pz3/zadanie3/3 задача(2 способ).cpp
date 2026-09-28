#include <iostream>
using namespace std;

int tensDigit(int n) {
    return n / 10 % 10;
}

int main() {
    int n;
    cin >> n;
    cout << tensDigit(n);
    return 0;
}
