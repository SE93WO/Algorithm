#include<iostream>
using namespace std;

int main() {
    int n, v, cnt = 0;
    int arr[101] = {0,};

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> v;
    for(int i = 0; i < n; i++) {
        if(arr[i] == v) cnt++;
    }

    cout << cnt;
}