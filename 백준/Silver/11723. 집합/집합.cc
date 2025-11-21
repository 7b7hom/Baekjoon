#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int S[22] = {0};
    
    int m, x;
    string input;

    cin >> m;

    while (m--) {
        cin >> input;
        if (input == "add") {
            cin >> x;
            S[x] = 1;   // x라는 원소가 존재한다! 로 표시
        }
        else if (input == "remove") {
            cin >> x;
            S[x]=0;
        }
        else if (input == "check") {
            cin >> x;
            if (S[x]==1) cout << "1\n";
            else cout << "0\n";
        }
        else if (input == "toggle") {
            cin >> x;
            if (S[x]==1) S[x]=0;
            else S[x]=1;
        }
        else if (input == "all") {
            for (int i=1; i<=20; i++) {
                S[i] = 1;
            }
        }
        else if (input == "empty") {
            for (int i=1; i<=20; i++) {
                S[i] = 0;
            }
        }
    }
}