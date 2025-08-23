#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int L;
        scanf("%d", &L);

        int sum = 0;

        for (int i = 0; i < L; i++) {
            char str[51];
            scanf("%s", str);

            for (int j = 0; str[j]; j++) {
                sum += (str[j] - 'A' + i + j);
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}

// https://judge.beecrowd.com/pt/problems/view/1257
