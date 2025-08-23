#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int K;
        scanf("%d", &K);

        char first[21];
        scanf("%s", first);

        bool same = true;
        for (int i = 1; i < K; i++) {
            char word[21];
            scanf("%s", word);

            if (strcmp(first, word) != 0) {
                same = false;
            }
        }

        if (same) {
            printf("%s\n", first);
        } else {
            printf("ingles\n");
        }
    }

    return 0;
}
