//
// Created by Ignorant on 2023/12/8.
//

#include <stdio.h>
#include <stdlib.h>
#define NUM_OF_SCORES 3
#define NUM_OF_MUSICIANS 4

void Print(const int table[][NUM_OF_SCORES], int num_of_musicians);
int main() {
    // 1.Initialize scores with a 2D array
//    const int scores[NUM_OF_MUSICIANS][NUM_OF_SCORES] = {
//            {0, 10, 20},
//            {10, 20, 30},
//            {20, 30, 40},
//            {30, 40, 50}
//    };
    // 2.Dynamically allocate memory for scores
    int rows = 0;
    printf("Please input the number of the students:\n");
    scanf("%d", &rows);
    int (*scores)[NUM_OF_SCORES] = malloc(rows * NUM_OF_SCORES * sizeof(**scores));
    if (scores == NULL) {
        return 0;
    }
    printf("Please input the scores of these students:\n");
    for (int i = 0; i < NUM_OF_MUSICIANS; i++) {
        for (int j = 0; j < NUM_OF_SCORES; j++) {
            scanf("%d", &scores[i][j]);
        }
    }
    Print(scores, NUM_OF_MUSICIANS);

    int (*ptr_scores)[NUM_OF_SCORES] = scores;
    printf("ptr_scroes[3][2] = %d\n", *(*(ptr_scores + 3) + 2));
    free(scores);
    return 0;
}

// int table[]: int *table;
// int table[][COL]: int (*table)[COL]
void Print(const int table[][NUM_OF_SCORES], int num_of_musicians) {
    for (int i = 0; i < num_of_musicians; i++) {
        for (int j = 0; j < NUM_OF_SCORES; j++) {
            /*
             * table[i][j]: *(*(table + i) + j)
             * table: int (*)[]
             * table + i: int (*)[]
             * *(table + i): int *
             * *(table + i) + j: int *
             * *(*(table + i) + j): int
             */
            printf("table[%d][%d]: %d\n", i, j, table[i][j]);
        }
        printf("\n\n");
    }
}
