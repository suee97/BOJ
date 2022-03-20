#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    list<int> L;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if(temp == 0) {
            L.pop_back();
        } else {
            L.push_back(temp);
        }
    }
    
    list<int>::iterator t;
    int sum = 0;
    for(t = L.begin(); t != L.end(); t++) {
        sum += *t;
    }

    cout << sum;

    return 0;
}

