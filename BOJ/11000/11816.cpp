#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	string x;
	cin >> x;
	if (x[0] == '0' && x[1] == 'x') cout << stoi(x, nullptr, 16);
	else if (x[0] == '0' && x[1]) cout << stoi(x, nullptr, 8);
	else cout << stoi(x, nullptr, 10);
}
