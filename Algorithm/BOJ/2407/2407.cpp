#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string dp[101][101];

string bigInteger(string x, string y) {
    long long sum = 0;
    string num;
    
    while(!x.empty() || !y.empty() || sum) {
        if(!x.empty()) {
            sum += x.back() - '0';
            x.pop_back();
        }
        if(!y.empty()) {
            sum += y.back() - '0';
        }
        num.push_back((sum%10) + '0');
        sum /= 10;
    }
    
    reverse(num.begin(), num.end());
    return num;
}

string comb(int n, int m) {
    if(n == m || m == 0)
        return "1";
    
    string &ans = dp[n][m];
    if(ans != "")
        return ans;
    
    ans = bigInteger(comb(n - 1, m - 1), comb(n - 1, m));
    return ans;
}

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    cout << comb(n, m);
    return 0;
}
