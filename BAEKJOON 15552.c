#include "stdio.h"

int main(void) {
  int a;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
  }
  return 0;
}
