// Problem: Given a number n, find all the factors of n that end with 2 or 7. If there are no such factors, print -1.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans =0;
    for(int i=1;i<=n;i++){
        if(n%i==0 && (i%10==2 || i%10 == 7)){
            cout<<i<<" ";
            ans++;
        }
    }
    if(ans == 0){
        cout<<-1;
    }
}