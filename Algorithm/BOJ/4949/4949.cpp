#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <vector>
#include <stack>
#include <map>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string input;
	
	while (true){
		bool flag = true;
		stack<int> st;
		getline(cin, input);
		if (input[0] == '.') break;

		for (int i = 0; i < input.size(); i++) {
			if (input[i] == '(')
				st.push(input[i]);	
			else if (input[i] == ')') {
				if (!st.empty() && st.top() == '(')
					st.pop();
				else
					flag = false;
			}

			if (input[i] == '[')
				st.push(input[i]);
			else if (input[i] == ']') {
				if (!st.empty() && st.top() == '[')
					st.pop();
				else
					flag = false;
			}
		}

		if (st.empty() && flag)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}