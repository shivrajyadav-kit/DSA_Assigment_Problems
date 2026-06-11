// Problem: Given two numbers n and m, determine if n! is equal to m! or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    if(n == m || (n==0 && m ==1) || (n==1 && m == 0)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}