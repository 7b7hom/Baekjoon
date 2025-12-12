#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;  

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    string vps;

    while (T--) {
        cin >> vps;
        int cnt = 0;

        for (int i=0; i<vps.size(); i++) {
            if (vps[i] == '(') cnt++;
            else cnt--;

            if (cnt < 0) break;
        }
        
        if (cnt == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}