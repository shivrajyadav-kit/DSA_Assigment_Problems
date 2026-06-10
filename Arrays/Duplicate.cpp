#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      long long A[n];
      long long ans;
      for(int i=0;i<n;i++){
         cin>>A[i];
      }
      for(int i=0;i<n;i++){
      int count = 0;
      int target = A[i];
      for(int j=0;j<n;j++){
         if(A[j] == target){
            count++;
         }
      }
      if(count > 1){
         ans = A[i];
         break;
      }
   }
     cout<<ans<<endl;
   
   }
}