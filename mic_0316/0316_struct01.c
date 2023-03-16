#include <stdio.h>
struct score
{
    int mic; // 마이크로프로세서 성적
    int lin; // 리눅스 성적
    int pro; // 프로젝트 성적
};

int main(void){
    struct score s1; // struct score s1 = {60, 70, 60}; 초기화 가능
    s1.mic = 60;
    s1.lin = 70;
    s1.pro = 80;
    printf("각 점수 출력 : %d %d %d \n", s1.mic, s1.lin, s1.pro);
    return 0;    
}
