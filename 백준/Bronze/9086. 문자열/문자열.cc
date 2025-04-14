#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int T;
    char s[100];
    scanf("%d", &T);
    for (int i = 0 ; i < T ; i++) {
        scanf("%s", s);
        int len = strlen(s);
        printf("%c%c\n",s[0],s[len-1]);
    }
    return 0;
}