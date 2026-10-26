//1 задача 
#include <iostream>
using namespace std;

long long binpow(long long a, long long n) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) result *= a;
        a *= a;
        n /= 2;
    }
    return result;  
}

int main() {
    long long q, w;
    cin >> q >> w;
    long long ans = binpow(q, w);      
    cout << "10^12 = " << ans << endl;  
    return 0;
}
// 1 задача 2 способ
#include <iostream>
using namespace std;

long long power(long long a, long long n) {
    long long res = 1;
    for (int i = 0; i < n; ++i) {
        res *= a;
    }
    return res;
}

int main() {
    long long a, n;
    cin >> a >> n;                 // вводим два числа
    cout << a << "^" << n << " = " << power(a, n) << endl;
    return 0;
}

// 2 задача
#include <iostream>
using namespace std;

// Рекурсивная функция: ищет самую большую сумму, на которую делятся и a, и b
long long gcd(long long a, long long b) {
    if (b == 0)          // Если второй ноль — значит, ответ это a
        return a;
    return gcd(b, a % b); 
}

int main() {
    long long a, b;
    cin >> a >> b;                 // Читаем траты Паши и Егора
    cout << gcd(a, b) << endl;    // Выводим сумму сброса
    return 0;
}

// задача 3
#include <iostream>
using namespace std;


void solve(int n, int from, int to, int aux) {
    if (n == 0) return; 

   
    solve(n - 1, from, aux, to);

    
    cout << "Ingredient " << n << " move from " << from << " to " << to << endl;

    
    solve(n - 1, aux, to, from);
}

int main() {
    int n;
    cin >> n; 
    
  
    solve(n, 1, 2, 3);
    
    return 0;
}





