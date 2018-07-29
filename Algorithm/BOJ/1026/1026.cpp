//
//  main.cpp
//  BOJ
//
//  Created by SeWo on 03/11/2017.
//  Copyright © 2017 SeWo. All rights reserved.
//


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, S;
    cin >> N;
    
    int A[51] = {0,};
    int B[51] = {0,};
    
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    
    for(int i=0; i<N; i++) {
        cin >> B[i];
    }
    
    sort(A, A+N);
    sort(B, B+N, greater<int>());
    
    for(int i=0; i<N; i++) {
        S += A[i] * B[i];
    }
    
    cout << S;
    
    return 0;
}




