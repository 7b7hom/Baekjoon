#include <string.h>
#include <iostream>
using namespace std;
int main() {

    int a, b;
    cin >> a >> b;
    while (a != 0 && b != 0) {

        if (a > b) {
            printf("Yes\n");
        }
        else if (a <= b) {
            printf("No\n");
        }
        cin >> a >> b;
    }

    return 0;
}
