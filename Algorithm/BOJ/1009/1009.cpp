#include <cstdio>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
		int a, b;
		int temp;
		scanf("%d %d", &a, &b);

		temp = a;
		for (int i = 0; i < b - 1; i++)
			a = (temp * a) % 10;

		if (a == 0) {
			printf("10\n");
		} else
			printf("%d\n", a);
	}
}