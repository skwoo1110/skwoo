#include <stdio.h>

int main() {
	int i, n, k, m = 0, a[11]; 
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++) scanf("%d", &a[i]);
	for (i = n; i > 0; i--) {
		m = m + (k / a[i]);
		k = k % a[i];
	}
	printf("%d", m);
	
	return 0;
}
