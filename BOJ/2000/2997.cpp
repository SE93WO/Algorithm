#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int num[3];
	cin >> num[0] >> num[1] >> num[2];
	sort(num, num + 3);

	if (num[1] - num[0] == num[2] - num[1]) {
		cout << 2 * num[2] - num[1] << endl;
	}
	else if (num[1] - num[0] < num[2] - num[1]) {
		cout << (num[2] + num[1]) / 2 << endl;
	}
	else
		cout << (num[1] + num[0]) / 2 << endl;

	return 0;
}
