#include <stdio.h>
#include <string.h>

int main() {

    int n, temp;
    int countArr[10001] = {0};

    scanf("%d", &n);

    for (int i=0 ; i<n ; i++) {
        scanf("%d", &temp);
        countArr[temp]++;
    }

    for (int i=0 ; i<10001 ; i++) {
        if (countArr[i] > 0) {
            for (int j=0 ; j<countArr[i] ; j++) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}