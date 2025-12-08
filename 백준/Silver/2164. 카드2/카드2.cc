#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int main() {

    int n=0;
    cin >> n;

    queue<int> q;

    for (int i=1; i<=n; i++) {
        q.push(i);
    }

    while(q.size() > 2) {
        q.pop();
        int x = q.front();
        //cout << "x=" << x;
        q.pop();
        q.push(x);
        // q.front()를 x 변수에 저장하고 pop을 한번 더. 그다음에 q.push(x)
    }
    if (q.size() == 2) {
        q.pop();
    }

    cout << q.front();

    return 0;
}
