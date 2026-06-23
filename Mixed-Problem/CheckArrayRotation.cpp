#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long A[n];
        for(int i =0;i<n;i++){
            cin>>A[i];
        }
        int l = 0, r = n-1;
        while(l<r){
            int mid = (l + r)/2;
            if(A[mid]>A[r]){
                l = mid +1;
            }
            else{
                r = mid;
            }
        }
        cout<<l<<endl;
    }
}