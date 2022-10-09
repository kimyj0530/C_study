#include <stdio.h>

int main(void) {
  int a[9] = {0};
  int n = 9, count = 0, max = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if (max < a[i]) {
      max = a[i];
      count = i;
    }
  }
  printf("%d\n%d", max, count + 1);

  return 0;
}
