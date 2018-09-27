#include <iostream>
#include <string>
using namespace std;

void print(bool ans, int n) {
	if (ans) {
		cout << "Case " << n << ": " << "true" << endl;
	} else
		cout << "Case " << n << ": " << "false" << endl;
}

int main() {
	int a, b, n = 1;
	string op;

	while (true) {
		bool ans;
		cin >> a >> op >> b;
		if (op == "E") {
			break;
		}

		if (op == ">") {
			ans = a > b ? true : false;
			print(ans, n);
			n++;
		}
		else if (op == ">=") {
			ans = a >= b ? true : false;
			print(ans, n);
			n++;
		}
		else if (op == "<") {
			ans = a < b ? true : false;
			print(ans, n);
			n++;
		}
		else if (op == "<=") {
			ans = a <= b ? true : false;
			print(ans, n);
			n++;
		}
		else if (op == "==") {
			ans = a == b ? true : false;
			print(ans, n);
			n++;
		}
		else if (op == "!=") {
			ans = a != b ? true : false;
			print(ans, n);
			n++;
		}
			
	}
}