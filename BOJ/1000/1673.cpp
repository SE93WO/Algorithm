#include <cstdio>
using namespace std;

int main() {
	long long int n, k;
	while (~scanf("%llu%llu", &n, &k)) {
		unsigned long long tmp = n;
		while (tmp / k) {
			n += tmp / k;
			tmp = tmp / k + tmp % k;
		}
		printf("%llu\n", n);
	}
}
