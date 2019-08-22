#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main() {
	string str;

	while (true) {
		getline(cin, str);
		if (str == "#") break;
		int arr[26] = { 0, };
		for (int i = 0; i < str.size(); i++) {
			if (str[i] >= 'A' && str[i] <= 'Z')
				arr[str[i] - 'A']++;
			else if (str[i] >= 'a' && str[i] <= 'z')
				arr[str[i] - 'a']++;
		}

		int cnt = 0;
		for (int i = 0; i < 26; i++) {
			if (arr[i] > 0) cnt++;
		}

		cout << cnt << endl;
	}
}
