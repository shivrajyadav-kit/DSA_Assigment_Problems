#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   long long A[n];
   for(int i=0;i<n;i++){
      cin>>A[i];
   }
   int ans =A[0];
   long long location = 1;
   for(int i =0;i<n;i++){
      if(A[i]>ans){
         ans = A[i];
         location = i+1;
      }
   }
   cout<<ans<<" "<<location<<endl;
   return 0;
}