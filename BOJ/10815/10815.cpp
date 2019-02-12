#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, m;
int arr[500001];
vector<int> vi;

void search(int x) {
	int left = 0;
	int right = n - 1;
	int mid;

	while (left <= right) {
		mid = (left + right) / 2;
		if (x > vi[mid])
			left = mid + 1;
		else if (x < vi[mid])
			right = mid - 1;
		else {
			cout << "1 ";
			return;
		}
	}
	cout << "0 ";
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		vi.push_back(input);
	}

	sort(vi.begin(), vi.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < m; i++) {
		search(arr[i]);
	}
 }