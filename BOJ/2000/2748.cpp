#include <cstdio>
long long fib[100];
int main() {
	fib[1] = 1;
	fib[2] = 1;
	int n;
	scanf("%d", &n);
	for (int i = 3; i <= n; ++i) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	printf("%lld", fib[n]);

}