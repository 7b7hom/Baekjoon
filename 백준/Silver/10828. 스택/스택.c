#include <stdio.h>
#include <string.h>

#define MAX 10000  // 최대 스택 크기

int stack[MAX];
int top_index = -1;  // 스택의 최상단 인덱스

// push: 스택에 값을 추가
void push(int x) {
    if (top_index < MAX - 1) {  
        stack[++top_index] = x;  
    }
}

// pop: 스택의 최상단 값 제거 및 출력
void pop() {
    if (top_index == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", stack[top_index--]);
    }
}

// size: 현재 스택 크기 출력
void size() {
    printf("%d\n", top_index + 1);
}

// empty: 스택이 비어 있는지 확인
void empty() {
    printf("%d\n", (top_index == -1) ? 1 : 0);
}

// top: 스택의 최상단 값 출력
void top() {
    if (top_index == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", stack[top_index]);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    char command[10]; // 명령어 저장 변수
    int num;

    for (int i = 0; i < N; i++) {
        scanf("%s", command);

        if (strcmp(command, "push") == 0) {
            scanf("%d", &num);
            push(num);
        } else if (strcmp(command, "pop") == 0) {
            pop();
        } else if (strcmp(command, "size") == 0) {
            size();
        } else if (strcmp(command, "empty") == 0) {
            empty();
        } else if (strcmp(command, "top") == 0) {
            top();
        }
    }

    return 0;
}
