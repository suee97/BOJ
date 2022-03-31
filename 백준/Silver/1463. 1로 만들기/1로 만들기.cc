#include <bits/stdc++.h>
#define ll long long

using namespace std;

int arr[1000001];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int X;
    cin >> X;

    arr[0] = 1e7;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 3;
    arr[6] = 2;

    for(int i = 7; i <= X; i++) {
        if(i%2 != 0 && i%3 != 0) arr[i] = arr[i-1] + 1;
        else {
            int a = 0, b = 0, c = 0;
            if(i%2 == 0) a = i/2;
            if(i%3 == 0) b = i/3;
            c = i - 1;

            if(arr[a] <= arr[b] && arr[a] <= arr[c]) {
                arr[i] = arr[a] + 1;
            } else if(arr[b] <= arr[a] && arr[b] <= arr[c]) {
                arr[i] = arr[b] + 1;
            } else if(arr[c] <= arr[b] && arr[c] <= arr[a]){
                arr[i] = arr[c] + 1;
            }
        }
    }
    
    cout << arr[X];
    
    return 0;
}

