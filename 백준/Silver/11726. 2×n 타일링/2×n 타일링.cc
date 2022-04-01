#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll arr[1001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    
    int n;
    cin >> n;
    
    for(int i = 4; i <= n; i++) {
        arr[i] = (arr[i-1] + arr[i-2])%10007;
    }

    cout << arr[n];
    
    return 0;
}

