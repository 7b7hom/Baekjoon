#include <iostream>
#include <algorithm>    // reverse 함수가 있는 헤더파일
#include <string>
using namespace std;

int main() {
    string N;
    while (1) {
        cin >> N;
        string rev = N;

        if (N =="0") break;

        reverse(rev.begin(), rev.end());

        if (N == rev) cout << "yes\n";
        else cout << "no\n";
    }
    
}