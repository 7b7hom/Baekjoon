#include <iostream>
#include <algorithm>    // reverse 함수가 있는 헤더파일
#include <string>
#include <vector>
using namespace std;

int main() {
    int N, K;
    int x= 1;
    int y= 1;
    cin >> N >> K;

    for (int i = N; i > N-K; i--) {
        x *= i;
    }
    for (int j = K; j > 0; j--) {
        y *= j;
    }
    int result = x / y;
    cout << result << endl;
}