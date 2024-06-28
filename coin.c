#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* coin_toss() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
    char name[50];
    int heads_count = 0;
    int tails_count = 0;

    srand(time(NULL));

    printf("Who are you?\n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Tossing a coin...\n");
    for (int round = 1; round <= 3; round++) {
        const char* result = coin_toss();
        printf("Round %d: %s\n", round, result);
        if (result == "Heads") {
            heads_count++;
        } else {
            tails_count++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);
    return 0;
}
