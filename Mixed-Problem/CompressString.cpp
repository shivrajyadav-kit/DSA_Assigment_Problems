#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int n = s.size();
    int i =0;
    while(i<n){
        int j = i;
        while(j<n and s[i]  == s[j]){

            j++;
        }
        int count = j - i;

            cout << s[i];
            if (count > 1) {
                cout << count;
            }

         i =j;
    }
    cout<<endl;
}
}