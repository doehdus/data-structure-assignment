#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

    // 1. 실제 문자열 데이터가 저장될 2차원 배열 (그릇)
    char buffer[4][50];

    // 2. 문자열들의 주소를 가리킬 포인터 배열
    char* ptr_array[4];

    // 3. 입력 받기 및 포인터 연결
    for (int i = 0; i < 4; i++) {
        scanf("%s", buffer[i]);

        ptr_array[i] = buffer[i];
    }
    printf("\n");

    // 4. 포인터 배열을 사용하여 출력
    for (int i = 0; i < 4; i++) {
        printf("%s\n", ptr_array[i]);
    }

    return 0;
}