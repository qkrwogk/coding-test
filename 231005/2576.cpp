#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int odd[7], idx=0;
    int sum=0;
    for(int i=0;i<7;i++) {
        int temp;
        cin >> temp;

        if(temp%2 == 1) {
            sum += temp;
            odd[idx] = temp;
            idx++;
        }
    }
    if(idx == 0) {
        cout << -1 << '\n';
        return 0;
    }
    cout << sum << '\n';
    int* min = min_element(odd, odd+idx);
    cout << *min << '\n';

}