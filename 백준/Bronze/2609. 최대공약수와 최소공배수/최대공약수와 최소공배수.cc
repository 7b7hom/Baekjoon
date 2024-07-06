#include <iostream>
#include <algorithm>    // reverse 함수가 있는 헤더파일
#include <string>
#include <vector>
using namespace std;

int main() {
    int x, y;   // 두 수
    cin >> x >> y;
    int a, b;   // 최대공약수, 최소공배수
    if (x < y) {
        int temp = x;
        x = y;
        y = temp;   // 무조건 큰 수를 x에 넣는다.
    }
    for (int i = 1; i <= y; i++) {
        if (x % i == 0 && y % i == 0) {
            a = i;
        }
    }
    b = (x/a) * (y/a) * a;

    cout << a << " " << b << endl;
}