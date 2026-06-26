#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long ans =0;
    for(long long num = 2;num <=n;num++){
        bool prime = true;
    for(long long  i=2;i*i<=num;i++){
        if(num%i==0){
            prime = false;
            break;
        }   
    }
    if(prime){
        ans++;
    }
}
    cout<<ans;
}