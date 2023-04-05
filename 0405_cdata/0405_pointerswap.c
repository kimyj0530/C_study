#include <stdio.h>

void swap(int *a, int *b);

int main(void){
    int a = 10;
    int b = 20;
    printf("a의 주소 : %p\n", &a);
    printf("b의 주소 : %p\n", &b);
    printf("swap() 함수 호출 전 => a : %d, b : %d\n", a, b); // 교환하기 전 변수 값 출력
    swap(&a, &b);
    printf("swap() 함수 호출 후 => a : %d, b : %d\n", a, b); // 교환한 후 변수 값 출력
    return 0;
}

void swap(int *a, int *b){
    printf("swap() 함수 안에서 a의 주소 : %p\n", a);
    printf("swap() 함수 안에서 b의 주소 : %p\n", b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap() 함수 안 => a : %d, b : %d\n", *a, *b);
}
