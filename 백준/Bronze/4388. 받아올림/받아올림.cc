#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int x=0, y=0;
    cin >> x >> y;


    while (!(x == 0 && y == 0)) {

        int cnt = 0;
        int carry = 0;

        while (x>0 || y>0) {

            
            int m = x % 10;
            int n = y % 10;

            x /= 10;
            y /= 10;

            if (m+n+carry >= 10) {
                cnt++;
                carry = 1;
            }
            else carry = 0;
        }

        cout << cnt << "\n";
        cin >> x >> y;
    }

    return 0;
}