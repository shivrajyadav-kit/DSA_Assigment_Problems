#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i =0;i<n;i++){
        cin>>A[i];
    }
    int pass =1;
    for(int i=n-1;i>=1;i--){
        int swaps =0;
        for(int j = 0;j<i;j++){
            if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
                swaps++;
            }
        }
        
        cout<<"Pass "<<pass<<": ";
        for(int j=0;j<n;j++){
            cout<<A[j]<<" ";
            if(j<n-1){
                cout<<" ";
            }
        }
                cout << ", swaps = " << swaps <<endl;
                if(swaps == 0){
                    break;
                }
                pass++;
    }

}