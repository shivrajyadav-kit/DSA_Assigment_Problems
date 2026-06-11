// The Problem: Given the marks of n students and a passing mark m, determine how many students passed and how many failed

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int m;
    cin>>m;
    int pass = 0, fail =0;
    for(int i=0;i<n;i++){
        if(A[i]>=m){
            pass++;
        }
        else{
            fail++;
        }
        
    }
    cout<<"Pass: "<<pass<<endl;
    cout<<"Fail: "<<fail<<endl;
}