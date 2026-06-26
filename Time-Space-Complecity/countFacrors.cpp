// Count the number of factors of a number


#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long ans = 0;
    for(long long  i=1;i*i<=n;i++){
        if(n%i == 0){
            if(i == n/i){
            ans++;
        }else{
            ans += 2;
        }
    }
    }
    cout<<ans;
}