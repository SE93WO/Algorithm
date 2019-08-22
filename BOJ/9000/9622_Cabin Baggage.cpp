#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int n, cnt = 0;
	float length, width, depth, weight;
	cin >> n;
	for (int i = 0; i < n; i++) {
		bool check = true;
		cin >> length >> width >> depth >> weight;
		float sum = length + width + depth;
		if (((length <= 56 && width <= 45 && depth <= 25) || sum <= 125) && weight <= 7) check = true;
		else check = false;
		if (check) cout << "1\n", cnt++;
		else cout << "0\n";
	}
	cout << cnt;
}
