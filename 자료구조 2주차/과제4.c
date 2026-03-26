#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 팩토리얼 재귀 함수 선언
int fact(int n);

int main() {
    int num = 0;
    int result = 0;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    printf("\n");

    result = fact(num);

    printf("\n%d의 팩토리얼 값은 %d입니다.\n", num, result);

    return 0;
}

int fact(int n) {
    // 1. 함수 호출 메시지 출력
    printf("fact(%d) 함수 호출!\n", n);

    if (n <= 1) {
        printf("fact(1) 값 1 반환!\n");
        return 1;
    }
    else {
        int res = n * fact(n - 1);

        printf("fact(%d) 값 %d 반환!\n", n, res);
        return res;
    }
}
