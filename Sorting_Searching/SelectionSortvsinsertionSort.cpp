#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long  A[n], temp[n], B[n];

        for (int i = 0; i < n; i++) {
            cin >> A[i];
            temp[i] = A[i];
            B[i] = A[i];
        }

        // Insertion sort shifts
        long long shifts = 0;
        for (int i = 1; i < n; i++) {
            long long key = temp[i];
            int j = i - 1;

            while (j >= 0 && temp[j] > key) {
                temp[j + 1] = temp[j];
                j--;
                shifts++;
            }
            temp[j + 1] = key;
        }

        // Selection sort swaps
        long long swaps = 0;
        for (int i = 0; i < n; i++) {
            int minidx = i;

            for (int j = i + 1; j < n; j++) {
                if (B[j] < B[minidx]) {
                    minidx = j;
                }
            }

            if (minidx != i) {
                swap(B[i], B[minidx]);
                swaps++;
            }
        }

        if (shifts < swaps) {
            cout << "Insertion Sort\n";
        } 
        else if (swaps < shifts) {
            cout << "Selection Sort\n";
        } 
        else {
            cout << "Tie\n";
        }
    }

    return 0;
}