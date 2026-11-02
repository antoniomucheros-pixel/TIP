#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    // Все уникальные буквы из "user agreement"
    string bad = "useragmnt";

    char ch;
    while (fin.get(ch)) {
        bool skip = false;
        for (char b : bad) {
            if (tolower(ch) == b) {
                skip = true;
                break;
            }
        }
        if (!skip) {
            fout.put(ch);
        }
    }

    return 0;
}
