#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int a, b, c;
        a = s[0]; // A
        b = s[1]; // B
        c = s[2]; // C

        int rightNum = (s[4]-'0')*pow(10, 3) + (s[5]-'0')*pow(10, 2) + (s[6]-'0')*10 + s[7]-'0';

        ll num1, num2, num3, sum;
        num1 = (a-65) * pow(26, 2);
        num2 = (b-65) * 26;
        num3 = c-65;
        sum = num1 + num2 + num3;

        if(abs(rightNum-sum) <= 100) cout << "nice";
        else cout << "not nice";

        cout << '\n';
    }

    return 0;
}
