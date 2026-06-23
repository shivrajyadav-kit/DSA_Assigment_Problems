#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int large = -1;
    int second_large = -1;
    for(int i=0;i<n;i++){
        if(A[i] > large){
            second_large = large;
            large = A[i];
        }
        else if(A[i] > second_large and A[i] != large){
            second_large = A[i];
        }


    }
    cout<<second_large;
    
    
}