#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   long long A[n];
   for(int i=0;i<n;i++){
      cin>>A[i];
   }
   bool flag = false;
   for(int i=1;i<n;i++){
      if(A[i]<A[i-1]){
         flag = true;
         break;
      }
   }
   if(flag){
      cout<<"No";
   }
   else{
   cout<<"Yes";
}

   return 0;
}