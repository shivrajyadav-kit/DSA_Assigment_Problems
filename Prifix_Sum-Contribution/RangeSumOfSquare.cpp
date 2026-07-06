#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    long long A[n+1];
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    long long P[n+1];
    P[0] = 0;
    for(int i =1;i<=n;i++){
        P[i] = P[i-1] +A[i]*A[i];
    }
    while(q--){
      int l,r;
      cin>>l>>r;

      cout<<P[r] - P[l - 1]<<endl;
    }
}