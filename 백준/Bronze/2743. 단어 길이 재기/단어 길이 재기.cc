#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;

    int len = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        len++;
    }

    cout << len << endl;
}