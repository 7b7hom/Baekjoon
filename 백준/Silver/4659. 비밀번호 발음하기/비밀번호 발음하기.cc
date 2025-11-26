#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

bool HaveVowel(string& s) {
    int slen = s.length();
    for (char c : s) {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
    }
    // cout << "모음없음\n";
    return false;
}

bool VowelCount(string& s) {
    int count = 0;
    int slen = s.length();
    for (int i=0 ; i<slen ; i++) {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
            count++;
            if (count == 3) return false;
        }
        else count = 0;
    }
    return true;
}

bool ConsonantCount(string& s) {
    int count = 0;
    int slen = s.length();
    for (int i=0 ; i<slen ; i++) {
        if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') {
            count++;
            if (count == 3) return false;
        }
        else count = 0;
    }
    return true;
}

bool ThreeInRow(string& s) {

    int vowelCount = VowelCount(s);
    int consonantCount = ConsonantCount(s);
    
    if (vowelCount==false || consonantCount==false) {
        //cout << "모자카운트 실패\n";
        return false;
    }
    else {
        //cout << "모자카운트 성공\n";
        return true;
    }
}

bool SameStr(string& s) {
    int slen = s.length();
    for (int i=0 ; i<slen ; i++) {
        if (s[i] == 'e' || s[i] == 'o') {
            continue;
        }
        else if (s[i] == s[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string pw;
    cin >> pw;

    while (pw != "end") {

        bool haveVowel = HaveVowel(pw);
        bool threeInRow = ThreeInRow(pw);
        bool sameStr = SameStr(pw);

        if (haveVowel == false || threeInRow == false || sameStr == false){
            cout << "<" << pw << ">" << " is not acceptable." << endl;
        }

        else cout << "<" << pw << ">" << " is acceptable." << endl;
        cin >> pw;
    }
    return 0;
}