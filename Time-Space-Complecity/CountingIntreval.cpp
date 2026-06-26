// Problem Statement: Given a number T and two numbers L and R,
//  find the count of integers between L and R (inclusive) that are divisible by T.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int T;
        long long L, R;
        cin >> T >> L >> R;

        long long ans = 0;

        if (T == 1) ans = max(0LL, R - L - 1);     
        else if (T == 2) ans = max(0LL, R - L);    
        else if (T == 3) ans = max(0LL, R - L);   
        else if (T == 4) ans = max(0LL, R - L + 1); 

        cout << ans << '\n';
    }

    return 0;
}