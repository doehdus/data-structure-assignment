#define _CRT_SECURE_NO_WARNINGS // Visual Studio scanf 오류 방지 (반드시 첫 줄!)
#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. 문자열을 저장할 공간 (1차원 배열)
    char str[100];
    int length = 0;

    // 2. 사용자로부터 문자열 하나 입력 받기
    printf("문자열을 입력하세요 : ");
    scanf("%s", str); // 공백 없는 문자열 하나를 읽어옴

    // 3. 반복문을 이용해 '널 문자(\0)' 전까지 길이를 셈
    // str[length]가 '\0'이 아니면 계속 카운트
    while (str[length] != '\0') {
        length++;
    }

    // 4. 요구하는 형식대로 출력q
    printf("\n입력된 문자열은\n\"%s\"\n입니다.\n", str);
    printf("\n입력된 문자열의 길이 = %d\n", length);

    // 실행 창이 바로 닫히는 것을 방지
    printf("\n");

    return 0;
}
