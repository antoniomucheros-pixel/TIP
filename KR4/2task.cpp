#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string line, longest = "";

    // читаем, пока есть строки
    while (getline(in, line)) {
        if (line.size() > longest.size()) longest = line;
    }

    out << longest; // записываем
}