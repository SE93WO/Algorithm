//
//  main.cpp
//  BOJ
//
//  Created by SeWo on 03/11/2017.
//  Copyright © 2017 SeWo. All rights reserved.
//


#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    stack<int> stack;
    vector<char> ans;
    int n;
    cin >> n;
    
    int *arr = new int[n];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int pos = 0;
    for(int i=1; i<=n; i++) {
        stack.push(i);
        ans.push_back('+');
        while(!stack.empty() && stack.top() == arr[pos]) {
            pos++;
            stack.pop();
            ans.push_back('-');
        }
    }
    
    if(!stack.empty()) {
        cout << "NO";
    } else {
        for(auto it : ans)
            cout << it << endl;
    }

}




