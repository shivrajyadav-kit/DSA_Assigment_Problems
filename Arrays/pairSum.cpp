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
        int x;
        cin>>x;
        long long count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(A[i] + A[j] == x){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}