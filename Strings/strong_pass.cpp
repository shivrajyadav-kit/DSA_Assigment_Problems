#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin>>s;
   if(s.size() != 10){
      cout<<"Weak";
      return 0;
   }
   int lower = 0, upper = 0, special =0, digit=0;
   for(int i =0; i<s.size();i++){
      char character = s[i];
      if(character >='a' && character <='z'){
         lower=1;
      }
      else if (character >= 'A' && character <= 'Z')
      {
         upper=1;
      }
      else if(character >= '0' && character <= '9'){
          digit=1;
      }
      else{
          special=1;
      }


   }
   if(lower && upper && special && digit){
         cout<<"Strong";

      }
      else{
         cout<<"Weak";
      }
}
   

