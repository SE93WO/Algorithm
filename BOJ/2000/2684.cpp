#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string str;
	cin >> n;
	while (n--) {
		int cnt[8] = { 0, };
		cin >> str;
		for (int i = 0; i < str.size() - 2; i++) {
			if (str[i] == 'T' && str[i + 1] == 'T' && str[i + 2] == 'T')
				cnt[0]++;
			else if (str[i] == 'T' && str[i + 1] == 'T' && str[i + 2] == 'H')
				cnt[1]++;
			else if (str[i] == 'T' && str[i + 1] == 'H' && str[i + 2] == 'T')
				cnt[2]++;
			else if (str[i] == 'T' && str[i + 1] == 'H' && str[i + 2] == 'H')
				cnt[3]++;
			else if (str[i] == 'H' && str[i + 1] == 'T' && str[i + 2] == 'T')
				cnt[4]++;
			else if (str[i] == 'H' && str[i + 1] == 'T' && str[i + 2] == 'H')
				cnt[5]++;
			else if (str[i] == 'H' && str[i + 1] == 'H' && str[i + 2] == 'T')
				cnt[6]++;
			else if (str[i] == 'H' && str[i + 1] == 'H' && str[i + 2] == 'H')
				cnt[7]++;
		}

		for (int i = 0; i < 8; i++) {
			cout << cnt[i] << " ";
		}
		cout << endl;
	}
}
