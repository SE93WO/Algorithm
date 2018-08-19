#include<cstdio>

int a, b;
int f(int x) {
	int r = 0;
	for (; x; x /= 10) r = r * 10 + x % 10;
	return r;
}
int main() {
	scanf("%d %d", &a, &b);
	printf("%d", f(f(a) + f(b)));
	return 0;
}