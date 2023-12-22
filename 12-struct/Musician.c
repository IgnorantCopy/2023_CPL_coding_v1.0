//
// Created by Ignorant on 2023/12/22.
//


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// enumeration
typedef enum gender {
    MALE,   // 0 actually
    FEMALE, // 1 actually
} Gender;

typedef struct score {
    int cScore;
    int javaScore;
    int pythonScore;
} Score;

typedef struct musician {
    char *name;     // 8
    Gender gender;  // 1 + 7
    char *album;    // 8
    Score score;    // 12 + 4
} Musician;

void PrintMusician(const Musician *musician);
int CompareMusician(const void *musician1, const void *musician2);
int main() {
    // initialize
    Musician luo = {
            .name = "Luo DaYou",
            .gender = MALE,
            .album = "ZhiHuZheYe",
            .score.cScore = 0,
            .score.javaScore = 10,
            .score.pythonScore = 20,
    };
    Musician cui = {
            .name = "Cui Jian",
            .gender = MALE,
            .album = "XinChangZhengLuShangDeYaoGun",
            .score = {
                    .cScore = 10,
                    .javaScore = 20,
                    .pythonScore = 30,
            }
    };
    char album[] = "YiKeBuKenMeiSuDeXin";
    Musician zhang = {
            .name = "Zhang Chu",
            .gender = MALE,
            .album = album,
            .score = {
                    .cScore = 20,
                    .javaScore = 30,
                    .pythonScore = 40,
            }
    };
    printf("sizeof Musician = %zu\n", sizeof(Musician));
    
    Musician guo = zhang;
    guo.name = "Guo";
    strcpy(guo.album, "YiKeJiuMeiSuDeXin");
    PrintMusician(&guo);
    PrintMusician(&zhang);
    printf("\n");
    Musician musicians[] = {luo, cui, zhang};
    int len = sizeof musicians / sizeof *musicians;
    for (int i = 0; i < len; i++) {
        PrintMusician(&musicians[i]);
    }
    qsort(musicians, len, sizeof *musicians, CompareMusician);
    printf("\n");
    for (int i = 0; i < len; i++) {
        PrintMusician(&musicians[i]);
    }
    return 0;
}
void PrintMusician(const Musician *musician) {
    printf("%s\t%d\t%s\t%d\t%d\t%d\n",
           musician->name,  //(*musician).name
           musician->gender,
           musician->album,
           musician->score.cScore,
           musician->score.javaScore,
           musician->score.pythonScore);
}

int CompareMusician(const void *musician1, const void *musician2) {
    const Musician *m1 = musician1;
    const Musician *m2 = musician2;
    return strcmp(m1->name, m2->name);
//    const char *const *m1 = musician1;
//    const char *const *m2 = musician2;
//    return strcmp(*m1, *m2);
}
