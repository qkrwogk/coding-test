#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9];
    for(int i=0; i<9; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<9; i++) {
        for(int j=i+1; j<9; j++) {
            int sum=0;
            for(int k=0; k<9; k++) {
                if(k == i || k == j) continue;
                sum += arr[k];
            }
            if(sum == 100) {
                int f1 = arr[i];
                int f2 = arr[j];

                sort(arr, arr+9);
                for(int k=0; k<9; k++) {
                    if(arr[k] == f1 || arr[k] == f2) continue;
                    cout << arr[k] << '\n';
                }
                return 0;
            }
        }
    }
}