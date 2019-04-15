#include <iostream>
#include <string>
using namespace std;

int main() {
	int Months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string days[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
	int D, M, ans = 0;

	cin >> D >> M;

	for (int i = 0; i < M - 1; i++) {
		ans += Months[i];
	}

	ans += D;

	cout << days[ans % 7];
}