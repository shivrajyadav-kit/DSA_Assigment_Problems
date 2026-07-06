#include<bits/stdc++.h>
using namespace std;

int sumDigit(long long x){
    int sum  = 0;
    while(x>0){
    sum += x %10;
    x /= 10;
    }
    return sum;
}
int main(){

    int n,q,k;
    cin>>n>>q>>k;
    long long A[n+1];
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    long long P[n+1];
    P[0] = 0;
    for(int i =1;i<=n;i++){
        if(sumDigit(A[i]) == k){
            P[i] = P[i-1]+1;
        }
        else{
            P[i] = P[i - 1];
        }
    }
    while(q--){
      int l,r;
      cin>>l>>r;

      cout<<P[r] - P[l - 1]<<endl;
    }
}