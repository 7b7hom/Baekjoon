#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num, temp;
    vector<int> a;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> temp;
        a.push_back(temp);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < num; i++)
        cout << a[i] << "\n";

    return 0;
}
