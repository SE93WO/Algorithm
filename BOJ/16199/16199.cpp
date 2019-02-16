#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	

	int age_1, age_2, age_3;
	int year[2], month[2], day[2];

	cin >> year[0] >> month[0] >> day[0];
	cin >> year[1] >> month[1] >> day[1];

	if (month[0] < month[1]) {
		age_1 = year[1] - year[0];
	}
	else if (month[0] == month[1]) {
		if (day[0] <= day[1]) {
			age_1 = year[1] - year[0];
		}
		else {
			age_1 = year[1] - year[0] - 1;
		}
	}
	else {
		age_1 = year[1] - year[0] - 1;
	}
	
	age_2 = year[1] - year[0] + 1;
	age_3 = year[1] - year[0];

	printf("%d\n%d\n%d", age_1, age_2, age_3);
}