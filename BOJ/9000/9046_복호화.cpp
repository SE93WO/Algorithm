#include <iostream>
#include <string>
#include <algorithm>
typedef long long ll;
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		int alph[26] = { 0, };
		string str;
		int cnt = 0;
		getline(cin, str);
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == ' ') continue;
			alph[str[i] - 'a']++;
		}

		int max_alph = 0;
		for (int i = 0; i < 26; i++) {
			max_alph = max(alph[i], max_alph);
		}

		int it = 0;
		for (int i = 0; i < 26; i++) {
			if (max_alph == alph[i]) {
				cnt++;
				it = i;
			}
		}

		if (cnt >= 2) cout << '?' << endl;
		else cout << (char)(it + 'a') << endl;
	}
}