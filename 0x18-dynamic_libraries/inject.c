#define _GNU_SOURCE
#include <stdio.h>

int checkWinningNumbers(int n1, int n2, int n3, int n4, int n5, int bonus) {
    /* Modify the logic here to always return 1 (indicating a win) */
    return 1;
}

/* Override the original checkWinningNumbers function */
int __wrap_checkWinningNumbers(int n1, int n2, int n3, int n4, int n5, int bonus) {
    return checkWinningNumbers(n1, n2, n3, n4, n5, bonus);
}
