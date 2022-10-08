#include <stdio.h>

int main(void) {
  int n, a[1000001] ={0}, c=1000001, b=-1000001;
  scanf("%d", &n);
  for(int i=0; i < n; i++){
    scanf("%d", &a[i]);
    if(a[i] > b){
      b = a[i];
    }
    if(a[i] < c){
      c = a[i];
    }
  }
  printf("%d %d", c, b);
  return 0;
}
