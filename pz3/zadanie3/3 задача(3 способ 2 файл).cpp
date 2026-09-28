#include <iostream>
using namespace std;
void countOfTens(int a) {
    string as = to_string(a);
    if (as.length() > 2)
        cout << "Count of tens: " << as[1];
    else if (as.length() == 2)
        cout << "Count of tens: " << as[0];
    else
        cout << "Count of tens: 0";
}