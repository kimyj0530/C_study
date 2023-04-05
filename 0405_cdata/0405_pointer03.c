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
    x = &b;
    printf("x가 방문한 곳의 주소 : %p, 암호 : %d\n", x, *x);
    x = &c;
    printf("x가 방문한 곳의 주소 : %p, 암호 : %d\n", x, *x);
    // 포인터 변수로 바꾼 값 출력
    x = &a;
    *x = *x * 3;
    printf("x가 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", x, *x);
    x = &b;
    *x = *x * 3;
    printf("x가 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", x, *x);
    x = &c;
    *x = *x * 3;
    printf("x가 암호를 바꾼 곳의 주소 : %p, 암호 : %d\n", x, *x);
    return 0;
}