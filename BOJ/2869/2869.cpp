#include <iostream>
using namespace std;

typedef long long lld;
int main() {
	lld a, b, v;
	scanf("%lld %lld %lld", &a, &b, &v);

	lld start, end, day;

	start = 0;
	end = 1000111000;
	lld result = 1000111000;

	while (start <= end) {
		day = (start + end) / 2;

		if (v <= day * (a - b) + a) {
			result = (result > day + 1) ? day + 1 : result;
			end = day - 1;
		}
		else if (v > day*(a - b) + a) {
			start = day + 1;
		}
	}
	printf("%lld", result);
	return 0;
}