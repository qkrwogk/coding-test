#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    
    for(int n=0; n<N; n++) {
        for(int i=0; i<n; i++) cout << ' ';
        for(int i=0; i<2*(N-n)-1; i++) cout << '*';

        cout << '\n';
    }
}