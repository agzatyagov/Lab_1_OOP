#include <iostream>
#include <string>
#include "replacinfunc.h"

using namespace std;

int main() {
    string input;
    int n;
    char oldc, newc;

    cout << "text: ";
    getline(cin, input);

    cout << "n: ";
    cin >> n;

    cout << "old_value: ";
    cin >> oldc;

    cout << "new_value: ";
    cin >> newc;

    string output = replacinfunc(input, n, oldc, newc);
    cout << "text after replace: " << output << endl;

    return 0;

}
