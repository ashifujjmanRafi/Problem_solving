#include<stdio.h>
int main() {
	int n, k;
	while (scanf("%d %d", &n, &k) == 2) {
		printf("%d\n", n+(n/k)+((n/k)/k));
	}
	return 0;
}