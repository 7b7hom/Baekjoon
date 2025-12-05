#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
using namespace std;

#define IVector vector<int>

IVector add(IVector v) {

    for (int i=0; i<v.size(); i++) {
        if (i==0) continue;
        else{
            v[i]+=v[i-1];
            // cout << v[i] << "\n";
        }
    }   

    return v;
}

int main() {

    int n;
    IVector time;

    cin >> n;
    
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        time.push_back(x);
    }

    sort(time.begin(), time.end());
    // 일단 순서대로 놨음 1 2 3 3 4

    // 벡터 인덱스대로 접근 
    // 인덱스까지의 값을 모두 더해서 다른 벡터에 저장?
    time = add(time);

    // 그다음에 출력
    int result=0;
    for (auto &a : time) {
        // cout << a << "\n";
        result += a;
        // cout << result << "\n";
    }

    cout << result << "\n";

    return 0;
}