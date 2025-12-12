#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    string calc;
    queue<int> q;

    while (N--) {
        cin >> calc;
        if (calc == "push") {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (calc == "pop") {
            if (q.size() != 0) {
                cout << q.front() << "\n";
                q.pop();
            }
            else cout << "-1" << "\n";

        }
        else if (calc == "size") {
            cout << q.size() << "\n";
        }
        else if (calc == "empty") {
            if (q.size() == 0) cout << "1" << "\n";
            else cout << "0" << "\n";
        }
        else if (calc == "front") {
            if (q.size() != 0) {
                cout << q.front() << "\n";
            }
            else cout << "-1" << "\n";
        }
        else if (calc == "back") {
            if (q.size() != 0) {
                cout << q.back() << "\n";
            }
            else cout << "-1" << "\n";

        }
    }

    return 0;
}