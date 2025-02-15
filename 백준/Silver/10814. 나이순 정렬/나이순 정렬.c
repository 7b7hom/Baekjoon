#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int age;    // 나이
    char name[101];  // 이름
    int index;  // 가입 순서
} Member;

int compare (const void * a, const void * b) {
    Member *memberA = (Member *)a;  // a, b를 Member* 타입으로 변환
    Member *memberB = (Member *)b;

    if (memberA->age != memberB->age) {
        return memberA->age - memberB->age;
    }

    return memberA->index - memberB->index;
}

int main() {

    int N;
    scanf("%d", &N);

    Member members[N];

    int age;
    char name[20];

    for (int i = 0; i < N; i++) {
        scanf("%d %s", &members[i].age, members[i].name);
        members[i].index = i;
    }

    qsort(members, N, sizeof(Member), compare);

    for (int i=0 ; i<N ; i++) {
        printf("%d %s\n", members[i].age, members[i].name);
    }

    return 0;
}