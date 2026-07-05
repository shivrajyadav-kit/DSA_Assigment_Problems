#include<bits/stdc++.h>
using namespace std;

void bracketsPairs(string s, int p){
    int n = s.size();
    stack<int> st;

    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            st.push(i);
        }
        else if(s[i] == ')'){
            if(!st.empty()){
                int openIdx = st.top();
                st.pop();

                if(openIdx == p){
                    cout << i;
                    return;
                }
            }
        }
    }

    cout << -1;
}

int main(){
    string s;
    cin >> s;

    int p;
    cin >> p;

    bracketsPairs(s, p);
}