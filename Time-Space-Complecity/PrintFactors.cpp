// Count the number of factors of a number


#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long i;
    for(i=1;i*i<=n;i++){
        if(n % i == 0){
            cout<<i<<" ";
        }
    }
    i--;
    for(;i>=1;i--){
        if(n%i==0 && i != n/i){
            cout<<n/i<<" ";
        }
    }
}