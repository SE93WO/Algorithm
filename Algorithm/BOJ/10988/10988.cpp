#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;

typedef long long ll;

int main() {
	string str;
	bool palindrome = true;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] != str[str.size() - 1 - i]) {
			palindrome = false;
			break;
		}
	}

	if (palindrome)
		cout << "1";
	else
		cout << "0";
}