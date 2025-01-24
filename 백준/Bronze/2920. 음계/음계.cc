#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int main() {
    int n = 8, asc = 0, desc = 0;
    int c[8];

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < n; i++) {
        if (c[i] == i+1)
            asc++;
        else if (c[i] == 8-i)
            desc++;
    }

    if (asc == 8) printf("ascending");
    else if (desc == 8) printf("descending");
    else printf("mixed");


    return 0;
}