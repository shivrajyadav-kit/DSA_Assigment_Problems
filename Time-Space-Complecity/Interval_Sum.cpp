// Problem Statement: Given two numbers l and r, find the sum of all numbers from l to r.

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
    long long l,r;
    cin>>l>>r;
    long long sum = (l+r)*(r-l+1)/2;
    cout<<sum<<endl;
}
}
