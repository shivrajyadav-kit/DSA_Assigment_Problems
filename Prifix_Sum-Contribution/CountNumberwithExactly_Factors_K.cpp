problem: Count the number of elements in a given range that have exactly k factors.
#include<bits/stdc++.h>
using namespace std;

int divCount(int x){
    int cnt =0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            cnt++;
            if(i != x/i) cnt++;
        }
    }
    return cnt;
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
    for(int i = 1;i<=n;i++){
        if(divCount(A[i]) == k){
            P[i] = P[i - 1]+1;
        }else{
            P[i] = P[i-1];
        }
    }
    while(q--){
        int l,r;
        cin>>l>>r;

        cout<<P[r]-P[l-1]<<endl;
    }
}