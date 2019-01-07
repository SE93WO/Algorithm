#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string A, B;
	char op;
	cin >> A >> op >> B;

	if (A.length() < B.length())
		swap(A, B);

	if (op == '+') {
		if (A.length() == B.length()) {
			A.at(0) = '2';
		}
		else
			A.replace(A.length() - B.length(), B.length(), B);
	}
	else if (op == '*') {
		for (int i = 1; i < B.length(); i++) {
			A += '0';
		}
	}

	cout << A;
}