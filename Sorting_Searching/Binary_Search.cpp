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
   int l = 0;
   int r = n-1;
   bool flag = false;
   while(l<=r){
      int mid = (l+r)/2;
      if(a[mid]==m){
         flag = true;
         break;
      }
      else if(a[mid]>m){
         r = mid-1;
      }
      else{
         l = mid +1;
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
   

   

