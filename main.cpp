#include <iostream>
#include "greetWord.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    string word;
    while (true) {
        cout << "Input: ";
        getline(cin, word);
        greetWord(word);
    }
    return 0;
}
