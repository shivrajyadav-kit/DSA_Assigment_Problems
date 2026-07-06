#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    long long P[n+1];
    P[0] = 0;

    for(int i =1;i<=n;i++){
        P[i] = P[i-1];

        char c = s[i-1];
        if( c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            P[i]++;
        }

    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        cout << P[r] - P[l - 1] << "\n";
    }

    return 0;
}