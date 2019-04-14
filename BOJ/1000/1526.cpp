#include <iostream>
using namespace std;

int n, num;

void ans(int x) {
	if (x > n) return;
	num = num < x ? x : num;
	ans(x * 10 + 4);
	ans(x * 10 + 7);
}

int main() {
	cin >> n;
	ans(0);
	cout << num;
}