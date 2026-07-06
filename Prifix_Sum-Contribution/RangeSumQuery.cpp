#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    long long P[n];
    long long sum = 0;
    for(int i =0;i<n;i++){
        sum +=A[i];
        P[i] = sum;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        if(l == 1){
            cout<<P[r - 1]<<endl;
        }
        else{
            cout<<(P[r-1] - P[l -2])<<endl;
        }

    }

}