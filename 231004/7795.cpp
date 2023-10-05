#include <bits/stdc++.h>
using namespace std;

#define MAX_LEN 20001

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for(int t; t<T; t++) {
        int A[MAX_LEN];
        int B[MAX_LEN];

        int N, M;
        cin >> N >> M;
        for(int n=0; n<N; n++) {
            cin >> A[n];
        }
        for(int m=0; m<M; m++) {
            cin >> B[m];
        }

        sort(A, A+N, greater<>());
        sort(B, B+M, greater<>());

        int cnt=0;
        for(int n=0; n<N; n++) {
            for(int m=0; m<M; m++) {
                if(A[n] > B[m]) { // 커지는 순간이 오면 그 이후론 다 먹기 가능
                    cnt += M-m;
                    break;
                }
            }
        }
        cout << cnt << '\n';
    }
}