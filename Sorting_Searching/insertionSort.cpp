#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> A(n);

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for(int i = 1; i < n; i++) {
        long long key = A[i];
        int j = i - 1;
        int shifts = 0;

        while(j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
            shifts++;
        }

        A[j + 1] = key;

        cout << "Pass " << i << ": ";

        for(int k = 0; k < n; k++) {
            cout << A[k];
            if(k < n - 1) cout << " ";
        }

        cout << " , ";

        // sorted part
        for(int k = 0; k <= i; k++) {
            cout << A[k];
            if(k < i) cout << " ";
        }

        cout << " |";

        if(i < n - 1) cout << " ";
        for(int k = i + 1; k < n; k++) {
            cout << A[k];
            if(k < n - 1) cout << " ";
        }

        cout << " , shifts = " << shifts << "\n";
    }

    return 0;
}