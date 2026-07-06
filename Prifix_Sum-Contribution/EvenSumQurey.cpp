#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    long long P[n];
    long long sum = 0;
    for(int i=0;i<n;i++){
        if((i+1)%2 == 0){
        sum += A[i];
    }
        P[i] = sum;
    }
    int q;
    cin>>q;
    for(int i =0;i<q;i++){
        int l,r;
        cin>>l>>r;
        l--;
        r--;

        long long rangeSum;
        if(l==0){
            rangeSum = P[r];
        }
        else{
            rangeSum = P[r] - P[l-1];
        }
        
            cout<<rangeSum<<endl;
        
    }
}