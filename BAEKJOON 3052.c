#include <stdio.h>

int main(void) {
  int a,b[10] = {0}, result = 0;
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a);
    b[i] = a % 42;
  }
  for(int i=0; i < 10; i++){
    int count =0;
    for(int j=i+1; j<10; j++){
      if(b[i] == b[j]){
        count++;
      }
    }
    if(count == 0) result++;
  }
  printf("%d", result);
  return 0;
}
