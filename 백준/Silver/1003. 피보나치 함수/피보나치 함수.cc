#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void dp(int countZero[], int countOne[]) {
        for (int i=0; i<42; i++) {
            if (i == 0) continue;
            else if (i == 1) continue;
            else {
                countZero[i] = countZero[i-1] + countZero[i-2];
                countOne[i] = countOne[i-1] + countOne[i-2];
        }
    }
}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=0;
    cin >> T;

    int countZero[41] = {0};
    int countOne[41] = {0};

    countZero[0] = 1;
    countZero[1] = 0;

    countOne[0] = 0;
    countOne[1] = 1;

    dp(countZero, countOne);

    while (T--) {
        int x = 0;
        cin >> x;
        
        cout << countZero[x] << " " << countOne[x] << "\n";
    }


    return 0;
}