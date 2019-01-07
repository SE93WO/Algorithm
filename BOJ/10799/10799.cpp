//
//  main.cpp
//  BOJ
//
//  Created by SeungWoo Jang on 17/12/2018.
//  Copyright © 2018 SeungWoo Jang. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
	string str;
	stack<char> st;
	int result = 0;

	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(')
			st.push(str[i]);
		else {
			st.pop();
			if (str[i - 1] == '(')
				result += st.size();
			else
				result++;
		}
	}

	cout << result;
	return 0;
}
