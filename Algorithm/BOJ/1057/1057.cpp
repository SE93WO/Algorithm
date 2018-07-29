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
    int N;
    int count = 0;
    int Kim, Lim;
    
    cin >> N >> Kim >> Lim;
    
    while(N / 2) {
        if(Kim == Lim)
            break;
        Kim -= Kim/2;
        Lim -= Lim/2;
        
        count++;
    }
    
    cout << count;
    
    return 0;
}




