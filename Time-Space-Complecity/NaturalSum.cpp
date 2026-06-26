// Problem Statement: Given a number n, find the sum of first n natural numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long  sum = n*(n+1)/2;
    cout<<sum;
}