#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

bool desc(const tuple<int, int, int>& a, const tuple<int, int, int>& b) { 
    return (get<2>(a) > get<2>(b)); 
} 

int main() {
	vector<tuple<int, int, int>> triple;
	int n;
	int country, student_num, score;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> country >> student_num >> score;
		triple.push_back(make_tuple(country, student_num, score));
	}
	
	sort(triple.begin(), triple.end(), desc);

	int cnt = 0;
	int country_count[101] = { 0, };

	for (int i = 0; i < triple.size() && cnt < 3; i++) {
		if (country_count[get<0>(triple[i])] < 2) {
			cout << get<0>(triple[i]) << " " << get<1>(triple[i]) << endl;
			country_count[get<0>(triple[i])]++;
			cnt++;
		}
	}

}
