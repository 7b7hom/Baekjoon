#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, M;
    cin >> N;

    unordered_set<int> numSet;  // 해시 기반 탐색 (O(1))

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        numSet.insert(num);
    }

    cin >> M;

    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;

        cout << (numSet.count(num) ? 1 : 0) << '\n';
    }

    return 0;
}
