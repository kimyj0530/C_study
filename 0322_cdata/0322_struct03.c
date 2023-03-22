#include <stdio.h>

struct GameInfo
{
    char * name;
    int year;
    int price;
    char * company;
};

int main(void){
    // 구조체 변수 선언
    struct GameInfo gameArray[2] = {
        {"나도게임", 2022, 50, "나도회사"},
        {"너도게임", 2022, 100, "너도회사"}
    };  

    // 구조체 멤버
    printf("-- 게임 출시 정보 --\n");
    printf("게임 이름 : %s\n", gameArray[0].name);
    printf("발매 연도 : %d\n", gameArray[0].year);
    printf("게임 가격 : %d\n", gameArray[0].price);
    printf("제작 회사 : %s\n", gameArray[0].company);

    // 구조체 멤버 출력
    printf("-- 또 다른 게임 출시 정보 --\n");
    printf("게임 이름 : %s\n", gameArray[1].name);
    printf("발매 연도 : %d\n", gameArray[1].year);
    printf("게임 가격 : %d\n", gameArray[1].price);
    printf("제작 회사 : %s\n", gameArray[1].company);
    return 0;
}