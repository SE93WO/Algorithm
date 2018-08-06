#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
	long N, M;
	long long ans;
	scanf("%ld %ld", &N, &M);

	ans = abs(N - M);

	printf("%lld", ans);
}