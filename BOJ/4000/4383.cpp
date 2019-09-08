#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		vector<int> vi(n);
		int sequence[3000] = { 0, };
		for (int i = 0; i < vi.size(); i++)
			cin >> vi[i];
		for (int i = 0; i < vi.size() - 1; i++)
			sequence[abs(vi[i] - vi[i + 1])]++;
		bool check = true;
		for (int i = 1; i < vi.size(); i++) {
			if (sequence[i] > 0) continue;
			else {
				check = false;
				break;
			}
		}
		check ? cout << "Jolly\n" : cout << "Not jolly\n";
	}
}