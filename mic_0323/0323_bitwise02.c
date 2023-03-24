#include <stdio.h>

int main(void){
    int num1 = 15;
    int result1 = num1 >> 1; 
    int result2 = num1 >> 2;
    int result3 = num1 >> 3;
    printf("1칸 이동 결과 : %d\n", result1); // 7
    printf("2칸 이동 결과 : %d\n", result2); // 3
    printf("3칸 이동 결과 : %d\n", result3); // 1
    return 0;
}