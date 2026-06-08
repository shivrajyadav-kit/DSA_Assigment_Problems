#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   long long m;
   cin>>m;
   long long  A[n];
   for(int i=0;i<n;i++){
      cin>>A[i];
   }
   bool flag = false;
   for(int i =0;i<n;i++){
      if(A[i]==m){
         flag = true;
         break;
      }
   }  
      if(flag){
         cout<<"YES";
      }
      else{
         cout<<"NO";
      }
   return 0;
}