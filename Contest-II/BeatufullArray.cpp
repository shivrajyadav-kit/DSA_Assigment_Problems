// Problem: Given an array of n integers, determine if all the elements in the array are the same or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    bool flag = false;
    for(int i=0;i<n;i++){
        if(A[i] != A[0]){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}