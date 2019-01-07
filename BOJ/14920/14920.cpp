#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;

typedef long long ll;

int main()
{
	int n, cnt = 1;
	cin >> n;

	while (true) {
		if (n == 1) break;

		if (n % 2 == 0)
			n /= 2, cnt++;
		else
			n = (3 * n) + 1, cnt++;
	}

	cout << cnt;
}