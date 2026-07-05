#include<bits/stdc++.h>
using namespace std;

bool isOpening(char ch){
    return ch == '(' or ch =='{' or ch =='[';
}
bool isClosing(char ch){
    return ch == ')' or ch == '}' or ch == ']';
}

int findDepth(string s){
    int cnt = 0;
    int ans = 0;

    for(char ch: s)
    {
        if(isOpening(ch)){
            cnt++;
        }
        else if(isClosing(ch)){
            cnt--;
        }
        ans = max(ans, cnt);
    }
    return ans;
}

int main(){
    string s;
    getline(cin, s);
    cout<<findDepth(s);
}