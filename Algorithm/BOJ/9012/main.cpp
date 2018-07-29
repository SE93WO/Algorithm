//
//  main.cpp
//  BOJ
//
//  Created by SeWo on 03/11/2017.
//  Copyright © 2017 SeWo. All rights reserved.
//


#include <iostream>
#include <stack>
using namespace std;

int main() {
    int T;
    int top = 0;
    cin >> T;
    
    string str;
    stack<char> stack;
    
    while(T--) {
        cin >> str;
        bool valid = true;
        for(int i=0; i<str.length(); i++) {
            if(str[i] == '(')
                top++;
            else if(str[i] == ')') {
                if(top == 0) {
                    valid = false;
                    break;
                } else
                    top--;
            }
        }
        if(top!=0)
            valid = false;
        cout << (valid==true?"YES\n":"NO\n");
        top = 0;
    }
    
}




