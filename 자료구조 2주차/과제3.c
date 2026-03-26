#include <stdio.h>

int main() {
    char student[3][4][40] = { 0, };
    const char* labels[4] = { "0", "이름", "학과", "학번" };

    //입력
    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 4; j++) {
            printf("학생 %d의 %s: ", i, labels[j]);

            gets_s(student[i][j], sizeof(student[i][j]));
        }
        printf("\n");
    }
    //출력
    for (int i = 1; i < 3; i++) {
        printf("학생 %d\n", i);
        for (int j = 1; j < 4; j++) {
            printf("    ");
            for (int k = 0; student[i][j][k] != '\0'; k++) {
                printf("%c", student[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
