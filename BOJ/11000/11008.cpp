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
	int T;
	string s, p;

	cin >> T;
	while (T--) {
		cin >> s >> p;
		int time = 0;
		while (s.find(p) != string::npos) {
			s.erase(s.find(p), p.length());
			time++;
		}

		time += s.length();

		cout << time << endl;
	}
}