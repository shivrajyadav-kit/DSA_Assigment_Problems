// Problem: Given an array of n elements, print the elements in a specific order. 
// The first element should be the middle element of the array, 
// followed by the elements to the left and right of the middle element, 
// alternating between them until all elements have been printed.

include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int l = n/2 -1;
    int r = n/2;
    while(l>=0){
        cout<<A[l]<<" "<<A[r]<<" ";
        l--;
        r++;
    }
}