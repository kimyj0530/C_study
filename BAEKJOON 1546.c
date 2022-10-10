#include <stdio.h>

int main() {
	int n, scr, fb = 0;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &scr);
		sum += scr;
		if (fb < scr)
			fb = scr;
	}
	printf("%lf", (sum / fb * 100) / n);
	return 0;
}
