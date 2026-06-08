#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
   int c0 = 0, c1 =0;
   long long A[n];
   for(int i=0;i<n;i++){
      cin>>A[i];
   }
   for(int i =0;i<n;i++){  
      if(A[i] == 0){
         c0++;
      }
      else{
         c1++;
      }
   }
   for(int i=0;i<c0;i++){
      cout<<0<<" ";
   }
   for(int i=0;i<c1;i++){
      cout<<1<<" ";
   }
   cout<<endl;;
}
}