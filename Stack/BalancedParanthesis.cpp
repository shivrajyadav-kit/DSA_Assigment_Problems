#include<bits/stdc++.h>
using namespace std;

bool isOpening(char ch){
    return ch == '(' or ch == '[' or ch == '{';
}

bool isValid(char open, char close){
    return (open == '(' and close == ')')
        or (open == '[' and close == ']')
        or (open == '{' and close == '}');
}

bool isBalanced(string s){

    stack<char> st;

    int cnt = 0;

    for(char ch : s){
        if(isOpening(ch))
        {
            st.push(ch);
        }else{
            if(st.empty()) return false;
            if(isValid(st.top(), ch)){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<(isBalanced(s)?"Yes" : "No")<<endl;
    }
}