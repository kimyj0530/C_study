#include "stdio.h"

int main(void) {
  int x, n, sum = 0;
  int a[100] = {0};
  scanf("%d", &x);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int b;
    scanf("%d %d", &a[i], &b);
    sum += a[i] * b;
  }
  if (sum == x) {
    printf("Yes");
  } else
    printf("No");
  return 0;
}
