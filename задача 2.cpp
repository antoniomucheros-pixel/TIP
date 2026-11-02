#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream f1("input1.txt");
    ifstream f2("input2.txt");
    ofstream out("output.txt");

    string x, y;
    getline(f1, x);
    getline(f2, y);

    if (x.find(y) != string::npos) {
        out << "yes";
    } else {
        out << "no";
    }

    return 0;
}

