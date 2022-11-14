#include "stdio.h"
int main(void){
  int n=0, rlt=1;
  scanf("%d", &n);
  for(int i=0; i<=n; i++){
    rlt = (rlt+i)%137;
  }
  printf("%d", rlt);
  return 0;
}
