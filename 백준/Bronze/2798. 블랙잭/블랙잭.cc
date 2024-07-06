#include <iostream>
using namespace std;

int main() {
    int N, M = 0;
    int card, maxSum = 0;
    cin >> N >> M;
    int arr[N-1];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < N-2; i++) {
        for (int j = i+1; j < N-1; j++) {
            for (int k = j+1; k < N; k++) {
                int temp = arr[k] + arr[j] + arr[i];
                if (M - temp >= 0) {
                    if (M - temp < M - maxSum) maxSum = temp;
                }
            }
        }
    }

    cout << maxSum << endl;
    return 0;
}