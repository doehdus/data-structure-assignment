#include <stdio.h>

int main() {
    int array[2][3][4] = { 0, };

    // 2. 입력 단계
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("array[%d][%d][%d] = ", i, j, k);
                scanf_s("%d", &array[i][j][k]);
            }
        }
        printf("\n");
    }

    // 3. 출력
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                printf("array [%d] [%d] [%d] = %d\n", i, j, k, array[i][j][k]);
            }
        }
    }

    return 0;
}