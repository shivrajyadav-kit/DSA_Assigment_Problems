// Problem Statement: Given a number n and an integer k, 
// find the k-th factor of n. If n has less than k factors, return -1.

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long cnt = 0;
    long long i;
    for(i = 1;i*i<=n;i++){
        if(n%i == 0){
            cnt++;
            if(cnt == k){
                cout<<i;
                return 0;
            }
        }
    }
    long long j;
    for(j=i-1;j>=1;j--){
        if(n%j == 0){
         if(j*j != n){
            cnt++;
            if(cnt == k){
                cout<<n/j;
                return 0;
            }
         }
        }
    } 
    cout<<-1;
    return 0;
}