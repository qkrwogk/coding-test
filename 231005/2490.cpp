#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            int temp;
            cin >> temp;
            sum += temp;
        }
        char res[] = {'D', 'C', 'B', 'A', 'E'};
        cout << res[sum] << '\n';
    }
}