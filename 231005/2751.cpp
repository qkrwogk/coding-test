#include <bits/stdc++.h>
using namespace std;

#define MAX_LEN 1000001

int arr[MAX_LEN];
int tmp[MAX_LEN];

int main(void) {
    // 기본 세팅
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 개수 받기
    int n;
    cin >> n;

    // 값 받기
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    // 소팅
    sort(arr, arr+n);

    // 출력
    for(int i=0; i<n; i++)
        cout << arr[i] << '\n';
}
