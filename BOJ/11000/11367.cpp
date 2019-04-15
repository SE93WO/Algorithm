#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	while (n--) {
		string name;
		int score;

		cin >> name >> score;

		if (score >= 97)
			cout << name << " " << "A+\n";
		else if (score >= 90 && score < 97)
			cout << name << " " << "A\n";
		else if (score >= 87 && score < 90)
			cout << name << " " << "B+\n";
		else if (score >= 80 && score < 87)
			cout << name << " " << "B\n";
		else if (score >= 77 && score < 80)
			cout << name << " " << "C+\n";
		else if (score >= 70 && score < 77)
			cout << name << " " << "C\n";
		else if (score >= 67 && score < 70)
			cout << name << " " << "D+\n";
		else if (score >= 60 && score < 67)
			cout << name << " " << "D\n";
		else if (score >= 0 && score < 60)
			cout << name << " " << "F\n";
			
	}
}