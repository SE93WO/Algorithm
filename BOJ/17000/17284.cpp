#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	int money = 5000;
	int input;
	do {
		cin >> input;
		if (input == 1) money -= 500;
		else if (input == 2) money -= 800;
		else if (input == 3) money -= 1000;
	} while (getc(stdin) == ' ');
	cout << money;
}
