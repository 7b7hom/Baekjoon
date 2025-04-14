#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char s[]) {
    char temp[4];
    int len = strlen(s);
    for (int i=0 ; i<len ; i++) {
        temp[i] = s[len-1-i];
    }
    temp[len] = '\0';
    strcpy(s, temp);
}

int main() {
    char a[4], b[4];
    scanf("%s %s", a, b);

    reverse(a);
    reverse(b);

    int int_a = atoi(a);
    int int_b = atoi(b);

    if (int_a > int_b) printf("%d", int_a);
    else printf("%d", int_b);

    return 0;
}