#include <stdio.h>
#include <string.h>

struct Size {
    int weight;
    int height;
} typedef size;


int main() {

    int N;
    scanf("%d", &N);

    size sizes[N];
    int rank[N];

    for (int i = 0; i < N ; i++) {
        scanf("%d %d", &sizes[i].weight, &sizes[i].height);
        rank[i] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j) {
                if (sizes[i].weight < sizes[j].weight && sizes[i].height < sizes[j].height) {
                    rank[i]++;
                }
            } 
        }
    }    

    for (int i=0; i < N; i++) {
        printf("%d ", rank[i]);
    }

    return 0;
}