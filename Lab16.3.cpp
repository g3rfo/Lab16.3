#include <iostream>
#include <stdio.h>

int main()
{
    int p[3][5];

    int i, j, k, t, min = 0, previous = 0, next = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("Enter [%d][%d]: ", i + 1, j + 1);
            scanf_s("%d", &p[i][j]);
        }
    }
    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf(" %d ", p[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < 3; i++) {
        for (k = 5; k > 0; k--) {    
            for (j = 0; j < k - 1; j++) {
                if (p[i][j] < p[i][j + 1]) {
                    min = p[i][j];
                    p[i][j] = p[i][j + 1];
                    p[i][j + 1] = min;
                }
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf(" %d ", p[i][j]);
        }
        printf("\n");
    }
}