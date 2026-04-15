#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   long long a[n];
   for(int i =0;i<n;i++){
      cin>>a[i];
   }
   int m;
   cin>>m;
   bool flag = 0;
   for(int i =0;i<n;i++){
      if(a[i] == m){
         flag = 1;
         break;
      }  
   }
   if(flag){
      cout<<"YES";
      return 0;
   }
   else{
      cout<<"NO";
   }

}
   

   

