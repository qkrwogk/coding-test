#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5] = {1, 4, 5, 2, 7};
    sort(a, a+5);
    for(auto& i: a)
        cout << i << ' ';
    cout << '\n';

    vector<int> b = {1, 4, 5, 2, 7};
    sort(b.begin(), b.end());
    for(auto i: b)
        cout << i << ' ';
    cout << '\n';

    return 0;
}