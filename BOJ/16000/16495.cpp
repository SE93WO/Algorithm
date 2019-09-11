#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	long long d = 1;
	long long sum = 0;
	for (int i = str.size() - 1; i >= 0; i--, d *= 26) {
		sum += (str[i] - 'A' + 1) * d;
	}
	cout << sum;
}