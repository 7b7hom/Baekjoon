#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    
    string s;
    cin >> s;

    int cnt[26] = {0};

    for (int i=0; i<s.length(); i++) {
        if (s[i] > 96) cnt[s[i]-'a']++;
        else cnt[s[i]+32-'a']++;
        // cout << cnt[s[i]-'a'] << "\n";
    }

    int maxCnt = 0;
    for (int i=0; i<26; i++) {
        maxCnt = max(maxCnt, cnt[i]);
    }  
    // cout << maxCnt;

    int sameCnt = 0;
    char answer;

    for (int i=0; i<26; i++) {
        if (cnt[i] == maxCnt) {
            sameCnt++;
            answer = i+'A';
        }
    }

    if (sameCnt >= 2) cout << "?";
    else cout << answer;

    return 0;
}