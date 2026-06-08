#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   long long m;
   cin>>m;
   long long A[n];
   for(int i=0;i<n;i++){
      cin>>A[i];
   }
   int count = 0;
   for(int i=0;i<n;i++){
      if(A[i] == m){
         count++;
      }
   }
   cout<<count;

   return 0;
}