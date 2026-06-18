#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    long long A[n];
    for(int i =0;i<n;i++){
        cin>>A[i];
    }
    long long B[m];
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    long long C[n+m];
    int i=0,j=0,k=0;
    while(i<n and j<m){
        if(A[i]<B[j]){
            C[k] = A[i];
            i++;
        }
        else{
            C[k] =B[j];
            j++;
        }
        k++;
    }
    while(i<n){
        C[k] = A[i];
        i++;
        k++;
    }
    while(j<m){
        C[k] = B [j];
        j++;
        k++;
    }
    for(int cnf = 0;cnf<n+m;cnf++){
        cout<<C[cnf];
        if(cnf <n + m -1){
            cout<<" ";
        }
    }
}