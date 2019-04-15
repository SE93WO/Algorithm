#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <vector>
#include <tuple>
#include <map>
#include <tuple>
#include <stack>
#include <deque>
#include <algorithm>

typedef long long ll;
using namespace std;

struct student {
	string name;
	int kor;
	int eng;
	int math;
};

bool cmp(const student &x, const student &y) {
	if (x.kor != y.kor) return x.kor > y.kor;
	if (x.eng != y.eng) return x.eng < y.eng;
	if (x.math != y.math) return x.math > y.math;
	return x.name < y.name;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vector<student> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << v[i].name << '\n';
	}
}