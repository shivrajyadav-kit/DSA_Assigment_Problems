#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int d;
        cin>>d;
        for(int i=d;i<n;i++){
            cout<<A[i]<<" ";
        }
        for(int i=0;i<d;i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
}