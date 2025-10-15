
#include "replacinfunc.h"
#include <string>
#include <iostream> 

using namespace std;

string replacinfunc(const string& s, int num, char old_char, char new_char) {
    if (num < 1) return s; 

    string res = s; 
    int cnt = 0, all = 0;

    for (char c : res)
        if (c == old_char) all++;

    if (num > all) return s; 

    for (int i = 0; i < (int)res.size(); i++) {
        if (res[i] == old_char) {
            cnt++;
            if (cnt % num == 0)
                res[i] = new_char;
        }
    }

    return res;
}