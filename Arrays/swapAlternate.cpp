#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      long long A[n];
      for(int i=0;i<n;i++){
         cin>>A[i];
      }for(int i=1;i<n;i+=2){
      swap(A[i],A[i-1]);
      }
      for(int i=0;i<n;i++){
         cout<<A[i]<<" ";
      }
      cout<<endl;
   }
}