#include <stdio.h>

int main(void){
    int a = 1;
    int b = 2;
    int c = 3;
    // 변수의 주소 출력
    printf("a네 주소 : %p, 암호 : %d\n", &a, a);
    printf("b네 주소 : %p, 암호 : %d\n", &b, b);
    printf("c네 주소 : %p, 암호 : %d\n", &c, c);
    // 포인터 변수 선언과 값 출력
    int * x;
    x = &a;
    printf("x가 방문한 곳의 주소 : %p, 암호 : %d\n", x, *x);
    *x = *x * 3;
    printf("x이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", x, *x);
    // 포인터 변수를 추가해 값 바꾸기
    printf("\n>> y가 미션을 수행하는 중 <<\n"); // 구분을 위해 추가
    int * y = x;
    *y = *y - 1; // 철수 = 철수 - 1;
    printf("y가 방문한 곳의 주소 : %p, 암호 : %d\n", y, *y);
    x = &b;
    printf("x가 방문한 곳의 주소 : %p, 암호 : %d\n", x, *x);
    *x = *x * 3;
    printf("x가 방문한 곳의 주소 : %p, 암호 : %d\n", x, *x);
    printf("\n>> y가 미션을 수행하는 중 <<\n");
    y = x;
    *y = *y - 1; // 영희 = 영희 - 1
    printf("y가 방문한 곳의 주소 : %p, 암호 : %d\n", y, *y);
    x = &c;
    printf("x가 방문한 곳의 주소 : %p, 암호 : %d\n", x, *x);
    *x = *x * 3;
    printf("x이 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", x, *x);
    printf("\n>> y가 미션을 수행하는 중 <<\n");
    y = x;
    *y = *y - 1; // 민수 = 민수 - 1
    printf("y가 방문한 곳의 주소 : %p, 암호 : %d\n", y, *y);
    return 0;
}