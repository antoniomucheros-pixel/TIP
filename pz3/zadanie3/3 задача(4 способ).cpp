#include <iostream>
using namespace std;

class Number {
public:
    int value;

    int tensDigit() const {
        return value / 10 % 10;
    }
};

int main() {
    Number n;
    cin >> n.value;
    cout << n.tensDigit();
    return 0;
}
