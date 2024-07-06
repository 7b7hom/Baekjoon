#include <iostream>
#include <algorithm>    // reverse 함수가 있는 헤더파일
#include <string>
#include <vector>
using namespace std;

int main() {
    int N;
    int M = 0;
    int score;
    vector<double> scores;
    double avg = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> score;
        scores.push_back(score);
        if (scores[i] > M) M = scores[i];
    }

    for (int i = 0; i < N; i++) {
        scores[i] = scores[i] / M*100;
        avg += scores[i];
    }
    
    avg = avg / N;
    cout << avg << endl;
    
}