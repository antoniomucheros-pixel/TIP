#include <iostream>
using namespace std;

// n - сколько цифр осталось добавить
// current - число, которое мы уже собрали
void generate(int current, int n) {
    if (n == 0) {
        cout << current << " "; // выводим готовое число
        return;
    }
    
    for (int i = 0; i <= 9; i++) {
        generate(current * 10 + i, n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    
    generate(0, n); // начинаем с 0
    return 0;
}