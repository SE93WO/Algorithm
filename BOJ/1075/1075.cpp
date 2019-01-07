//
//  main.cpp
//  BOJ
//
//  Created by SeWo on 03/11/2017.
//  Copyright © 2017 SeWo. All rights reserved.
//


#include <iostream>
using namespace std;

int main() {
    int N, F;
    int min;
    int num[2];
    
    cin >> N >> F;
    
    num[0] = N % 10;
    num[1] = (N % 100 - num[0]) / 10;
    N -= num[1] * 10 + num[0];
    
    for(int i=0; i<100; i++) {
        if(N % F == 0) {
            min = N;
            break;
        }
        N++;
    }
    
    num[0] = N % 10;
    num[1] = (N % 100 - num[0]) / 10;
    cout << num[1] << num[0];
    return 0;
}




