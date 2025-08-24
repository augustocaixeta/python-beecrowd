#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int const arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    while (N--) {
        int V;
        scanf("%d", &V);

        int num, leds = 0;
        while (V) {
            num = V % 10;
            leds += arr[num];
            V /= 10;

            printf("num: %d, leds: %d\n", num, arr[num]);
        }

        printf("%d leds\n", leds);
    }

    return 0;
}

// https://judge.beecrowd.com/pt/problems/view/1168
