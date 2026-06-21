#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long x;
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            flag = true;
            break;
        }
        if(arr[i]>x){
            break;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
        
}