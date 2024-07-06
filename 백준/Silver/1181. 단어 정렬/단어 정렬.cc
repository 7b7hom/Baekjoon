#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 비교 함수: 길이를 우선으로 하고, 길이가 같을 경우 사전순으로 정렬
int compare (string a, string b) {
    if (a.length() == b.length()) return a<b;
    else return a.length() < b.length();
}

string word[20000];

int main() {
    int N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> word[i];
    }

    sort(word, word + N, compare);

    for(int i = 0; i < N; i++) {
        if (word[i] == word[i-1]) continue; // 중복된 단어 제거
        cout << word[i] << "\n";
    }
    return 0;
}
