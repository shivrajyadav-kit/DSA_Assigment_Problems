// Problem: Given a number n, print all the numbers from 1 to n that have at most 4 divisors.

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    for(int i =1;i<=n;i++){
        int ans = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                ans++;
            }
        }
        if(ans <=4){
        cout<<i<<" ";
        }
     }   
}