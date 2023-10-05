#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int Y=0, M=0;
    for(int n=0; n<N; n++) {
        int cost;
        cin >> cost;
        Y+= (cost/30 + 1) * 10;
        M+= (cost/60 + 1) * 15;
    }

    if (Y < M) {
        cout << 'Y' << ' ' << Y;
    } else if (M < Y) {
        cout << 'M' << ' ' << M;
    } else {
        cout << 'Y' << ' ' << 'M' << ' ' << Y;
    }
    cout << '\n';
}