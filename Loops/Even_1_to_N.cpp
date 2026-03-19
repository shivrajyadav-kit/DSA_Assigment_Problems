#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin>>n;
    long long i = 2;
    while(i <=n){
        if(i %2 == 0){
        cout<<i<<" ";
        }
        i++;
    }
  return 0;
}
