#include <iostream>
using namespace std;

int main() {
	long long int N, result;
	cin >> N;

	result = (N - 1)*N*(N + 1) / 2;
	cout << result << endl;
	return 0;
}
