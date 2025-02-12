#include <stdio.h>
#include <string.h>

int main() {

    int value;  // 찾고자 하는 숫자
    int start = 2, sub = 5, floor = 2;
    
    scanf("%d", &value);

    if (value == 1) {
        printf("%d", value);
        return 0;
    }   // 1일 땐 1 출력

    while(1) {
        if (start <= value && value <= start + sub) {
            printf("%d", floor);
            return 0;
        }
        else {
            start = start + sub + 1;
            sub += 6;
            floor++;
        }
    }

    return 0;
}