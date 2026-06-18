#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i =0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n-1;i++){
        long long minVal = A[i];
        int loc= i;
        for(int j = i+1;j<n;j++){
            if(A[j]<minVal){
                minVal = A[j];
                loc=j;
            }
        }
        swap(A[i],A[loc]);
        cout<<"Pass "<<i+1<<": ";
        for(int j=0;j<n;j++){
            cout<<A[j]<<" ";
        }
                cout << ", min_selected = " << minVal <<endl;

    }

}