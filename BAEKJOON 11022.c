#include "stdio.h"

int main(void) {
  int a;
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    int b;
    scanf("%d %d", &a, &b);
    printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
  }
  return 0;
}
