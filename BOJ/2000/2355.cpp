#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	long long A, B;
	scanf("%lld %lld", &A, &B);
	if (A > B)
		swap(A, B);

	printf("%lld\n", (B - A + 1) * (A + B) / 2);
	
}
