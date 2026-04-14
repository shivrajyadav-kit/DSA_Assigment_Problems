#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin>>s;
   char c1;
   cin>>c1;
   for(int i=0;i<s.size();i++){
   if(s[i]==c1){
      s.erase(i,1);
      i--;

    
   }
}
   cout<<s<<" ";   
}