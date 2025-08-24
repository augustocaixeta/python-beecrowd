#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int const arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    while (N--) {
        char str[101];
        scanf("%s", str);

        int i = 0, leds = 0;
        while (str[i]) {
            leds += arr[str[i++] - '0'];
        }

        printf("%d leds\n", leds);
    }

    return 0;
}


// https://judge.beecrowd.com/pt/problems/view/1168
