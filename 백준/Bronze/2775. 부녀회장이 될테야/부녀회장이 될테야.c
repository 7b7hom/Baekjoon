#include <stdio.h>
#include <string.h>

int recidents(int k,int n) {
    int dp[15][15] = {0};

    for (int i = 1; i <= n; i++) {
        dp[0][i] = i;   
    }   // 0층의 i호에는 i명 거주

    for (int floor = 1; floor <= k; floor++) {
        for (int room = 1; room <= n; room++) {
            dp[floor][room] = dp[floor][room-1] + dp[floor-1][room];
        }
    }

    return dp[k][n];
}

int main() {

    int T;
    scanf("%d", &T);

    while(T--) {
        int k, n;
        scanf("%d %d", &k, &n);
        printf("%d\n", recidents(k, n));
    }
    
    return 0;
}