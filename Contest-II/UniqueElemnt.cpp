// Problem: Given an array of n elements, print all the unique elements in the array.

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (A[i] == A[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << A[i] << " ";
        }
    }
    return 0;
}