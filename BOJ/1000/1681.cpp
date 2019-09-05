#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	char comp = l + '0';
	int cnt = 0;
	int num = 0;
	while (true) {
		if (cnt == n) break;
		num++;
		string str = to_string(num);
		bool check = true;
		for (int i = 0; i < str.size(); i++) {
			if (cnt == n) break;
			if (str[i] == comp) check = false;
		}
		if (check) cnt++;
	}
	cout << num;
}
