#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* coin_toss() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
    srand(time(0));

    char name[50];
    printf("Who are you?\n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Tossing a coin...\n");

    const char* results[3];
    int heads_count = 0;
    int tails_count = 0;

    for (int i = 0; i < 3; i++) {
        results[i] = coin_toss();
        printf("Round %d: %s\n", i + 1, results[i]);
        if (results[i][0] == 'H') {
            heads_count++;
        } else {
            tails_count++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

    if (heads_count > tails_count) {
        printf("%s won!\n", name);
    } else {
        printf("%s lost!\n", name);
    }
    return 0;
}
