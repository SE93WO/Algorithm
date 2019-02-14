#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);	
	
	string input, temp;
	vector<string> vs;
	getline(cin, input);

	for (stringstream sts(input); (sts >> temp);) {
		vs.push_back(temp);
	}
	
	if (vs[1] == "AND") {
		if (vs[0] == "true" && vs[2] == "true") 
			cout << "true";
		else 
			cout << "false";
	}
	else if (vs[1] == "OR") {
		if (vs[0] == "false" && vs[2] == "false") 
			cout << "false";
		else 
			cout << "true";
	}
}