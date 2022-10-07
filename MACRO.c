// object_like_mecro
#define NUM 100
// funtion_like_mecro
#define SUM(A,B) (A+B)
#include "stdio.h"
#define NUM 100
#define SUM(A, B) (A + B) // SUM(1, 2)로 호출되면 3을 출력
#define MERGE(A, B) (A##B) // MERGE(11, 22)로 호출되면 1122를 출력
#define TOSTRING(A) (#A) // TOSTRING에 정수형값인 3을 넣으면 문자열 3을 출력한다.
#define ARRAY 1,\ // \은 메크로에서의 줄 바꿈이다.
              2,\
              3
int array[3] = {ARRAY}; // 배열 array에 ARRAY의 1, 2, 3을 저장 
                        // array[3] = {1, 2, 3}
int main(void) {
  printf("%d\n", MERGE(10, 11));
  printf("%s\n", TOSTRING(12));
  printf("%d\n", NUM);
  printf("%d\n", SUM(13, 14));
  printf("%d", array[2]);
}
