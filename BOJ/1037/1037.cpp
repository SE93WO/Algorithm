#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	vector<int> divisor;
	cin >> N;

	while (N--) {
		int input;
		cin >> input;
		divisor.push_back(input);
	}

	sort(divisor.begin(), divisor.end());

	cout << divisor.front() * divisor.back();
}