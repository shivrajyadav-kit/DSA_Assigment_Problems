#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    int  i = 0;
    int j = 0;
    int sum = 0;
    while(i<n and j<n){
        sum += A[i][j];
        i++;
        j++;
    }
    cout<<sum;
}