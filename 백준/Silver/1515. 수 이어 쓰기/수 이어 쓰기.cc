#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int answer = 0;

    string s;
    cin >> s;   // 주어진 문자열

    int idx = 0;

    for (int num=1; ; num++) {

        string numS = to_string(num);

        for (char c : numS) {
            if (s[idx] == c) {
                idx++;
            }
        }

        if (idx == s.length()) {
            cout << num;
            break;
        }
    }

    return 0;
}