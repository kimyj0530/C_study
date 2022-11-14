#include "stdio.h"

int dt[10000001] = {1, 0};

int main(void) {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    dt[i] = (dt[i - 1] + i) % 137;
  }
  printf("%d", dt[n]);
}
