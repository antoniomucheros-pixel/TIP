#include <iostream>
#include <cmath>   // нужна для функции sqrt (квадратный корень)
using namespace std;

int main() {
    double a, b, c;   // коэффициенты квадратного многочлена ax^2 + bx + c
    char symbol;      // символ, который задаёт действие программы

    // Считываем коэффициенты с клавиатуры
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    // Считываем символ-команду: A, t или c
    cout << "Enter symbol (A, t, or c): ";
    cin >> symbol;

    if (symbol == 'A') {
        // По условию: при символе A выводим имя и фамилию студента на английском
        cout << "Student Name: Ivanov Ivan" << endl;
    }
    else if (symbol == 't') {
        // При символе t вычисляем корни уравнения ax^2 + bx + c = 0
        
        if (a == 0 && b == 0) {
            // Если a и b нулевые, уравнение превращается в c = 0.
            // Если и c = 0, то верно для любого x; иначе решений нет.
            cout << (c == 0 ? "Any real number is a root." : "No real roots.") << endl;
        }
        else if (a == 0) {
            // Если только a = 0, это линейное уравнение: bx + c = 0 → x = -c/b
            cout << "One root: x = " << -c / b << endl;
        }
        else {
            // Обычный случай квадратного уравнения: считаем дискриминант
            double d = b * b - 4 * a * c;
            
            if (d < 0) {
                // Отрицательный дискриминант: действительных корней нет
                cout << "No real roots." << endl;
            }
            else if (d == 0) {
                // Дискриминант равен 0: один корень
                cout << "One root: x = " << -b / (2 * a) << endl;
            }
            else {
                // Положительный дискриминант: два корня по формуле
                cout << "Two roots: x1 = " << (-b + sqrt(d)) / (2 * a)
                     << ", x2 = " << (-b - sqrt(d)) / (2 * a) << endl;
            }
        }
    }
    else if (symbol == 'c') {
        // При символе c запрашиваем возраст и проверяем право на покупку алкоголя
        int age;
        cout << "Enter your age: ";
        cin >> age;
        
        // Если возраст 18 и выше - можно, иначе - нельзя
        cout << (age >= 18 ? "You can buy alcohol." : "You cannot buy alcohol.") << endl;
    }
    else {
        // Если введён любой другой символ - сообщаем, что он недопустим
        cout << "Invalid symbol. Use A, t, or c." << endl;
    }

    return 0;
}



