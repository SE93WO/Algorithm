//
//  main.cpp
//  BOJ
//
//  Created by SeungWoo Jang on 17/12/2018.
//  Copyright © 2018 SeungWoo Jang. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    queue<int> que;
    
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
        que.push(i);
    
    while(!que.empty()) {
        if(que.size() == 1) {
            printf("%d", que.front());
            break;
        }
        
        que.pop();
        que.push(que.front());
        que.pop();
    }
    
    return 0;
}
