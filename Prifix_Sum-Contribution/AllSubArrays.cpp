#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i = 0;i<n;i++){
        cin>>A[i];
    }
    int l,r;
    cin>>l>>r;
    for(l=0;l<n;l++){
        for(r=l;r<n;r++){
            for(int i=l;i<=r;i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }
    }
}