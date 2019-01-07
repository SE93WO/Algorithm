#include <iostream>
#include <algorithm>
using namespace std;

int stairs[301] = { 0, };
int sum[301] = { 0, };

int main() {
	int numberOfStairs;
	cin >> numberOfStairs;

	for (int i = 1; i <= numberOfStairs; i++)
		cin >> stairs[i];
	
	sum[1] = stairs[1];
	for (int i = 2; i <= numberOfStairs; i++)
		sum[i] = max(stairs[i - 1] + sum[i - 3], sum[i - 2]) + stairs[i];

	cout << sum[numberOfStairs];
}