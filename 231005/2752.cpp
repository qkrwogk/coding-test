#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a[3];
    for(auto& i: a) {
        cin >> i;
    }
    sort(a, a+3);
    
    for(auto& i: a) {
        cout << i << ' ';
    }
}