#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

template<template <typename> class P = std::less >
struct compare_pair_second {
    template<class T1, class T2> bool operator()(const std::pair<T1, T2>&left, const std::pair<T1, T2>&right) {
        return P<T2>()(left.second, right.second);
    }
};

int main() {
    int n, p;
    int value;
    string name;
    
    cin >> n;
    while(n--) {
        vector<pair<string, int>> v;
        cin >> p;
        for(int i = 0; i < p; i++) {
            cin >> value >> name;
            v.push_back(make_pair(name, value));
        }
        
        sort(v.begin(), v.end(), compare_pair_second<std::greater>());
        
        cout << v[0].first << endl;
    }
    
}
