#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    long long A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }

    long long P[n+1];
    P[0] = 0;
    long long ans = 0;
    for(int i = 1;i<=n;i++){
        if(i%2==1){
         ans = A[i-1];
        }
        else{
            ans = -A[i-1];
        }
        P[i] = P[i-1]+ans;
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        long long finalAns = P[r] - P[l-1];
        if(l % 2 == 0){
         finalAns = -finalAns;
     }
     cout<<finalAns<<endl;
    }
}