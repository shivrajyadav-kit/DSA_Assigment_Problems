//Problem: Given the runner times of n runners and a qualifying time m, determine how many runners qualified and how many did not qualify.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int ans= 0;
    for(int i=0;i<n;i++){
        if(A[i]<A[ans]){
            ans = i;
        }
        else if(A[i] == A[ans]){
            ans = i;
        }
    }
    cout<<ans + 1;

}