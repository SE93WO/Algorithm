#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

bool check(int num) {
	int isSix = 0;
	while (num > 0) {
		int temp = num % 10;
		if (temp == 6) {
			isSix++;
			if (isSix >= 3) return true;
		}
		else isSix = 0;
		num /= 10;
	}
	return false;
}

int main() {
	int n;
	scanf("%d", &n);

	int num = 666;
	int count = 0;
	while (true) {
		if (check(num)) count++;
		if (count == n) {
			printf("%d", num);
			return 0;
		}
		num++;
	}
}
 