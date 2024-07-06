#include <iostream>
using namespace std;

int main() {
    int N, count= 0;
    int num;
    int result = 0;
    cin >> N;   //반복 횟수 input
    for (int i = 0; i < N;i++) {
        cin >> num; //숫자들 input  
        for (int div = 1; div <= num; div++) {
            if (num % div == 0)
                count++;
        }
        if (count == 2) 
            result ++;
        count = 0;  // 카운트는 초기화해야지...
    }
    

    cout << result << endl;
    return 0;
}