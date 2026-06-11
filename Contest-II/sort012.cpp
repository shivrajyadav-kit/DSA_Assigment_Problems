Problem: Sort an array of 0s, 1s and 2s in Decreasing Order.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i =0;i<n;i++){
        cin>>A[i];
    }
    int c0 =0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(A[i] == 0){
            c0++;
        }
        else if(A[i] == 1){
            c1++;
        }
        else{
            c2++;
        }
    }
    for(int i =1;i<=c2;i++){
        cout<<2<<" ";
    }
    for(int i =1;i<=c1;i++){
        cout<<1<<" ";
    }
    for(int i =1;i<=c0;i++){
        cout<<0<<" ";
    }
    
}