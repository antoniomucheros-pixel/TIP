#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

// Перевод числа в двоичную строку (без ведущих нулей, кроме случая 0)
string to_bin(long long n) {
    if (n == 0) return "0";
    string res;
    while (n > 0) {
        res += char('0' + (n % 2));
        n /= 2;
    }
    // Сейчас строка в обратном порядке — разворачиваем
    for (int i = 0, j = (int)res.size() - 1; i < j; ++i, --j) {
        char tmp = res[i];
        res[i] = res[j];
        res[j] = tmp;
    }
    return res;
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    string line;
    getline(fin, line);

    int i = 0;
    while (i < (int)line.size()) {
        if (isdigit(line[i])) {
            // Собрали всё число подряд
            long long num = 0;
            while (i < (int)line.size() && isdigit(line[i])) {
                num = num * 10 + (line[i] - '0');
                i++;
            }
            // Перевели в двоичный вид и записали
            fout << to_bin(num);
        } else {
            // Не цифра — просто копируем символ
            fout.put(line[i]);
            i++;
        }
    }

    return 0;
}


