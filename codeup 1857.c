#include "stdio.h"

int f(int n, int r){
  if(r == 1) return n;
  else if(n == r) return 1;
  else if(n < r) return 0;
  else if(r == 0) return 1;
  else return f(n-1, r-1)+f(n-1, r);
}

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", f(a, b));
}
