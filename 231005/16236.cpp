#include <bits/stdc++.h>
using namespace std;

int N;
int arr[20][20];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int bfs(int& timeCost, pair<int, int>& init, int size) {
    int vis[20][20];
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            vis[i][j] = 0;
        }
    }
    queue<pair<pair<int, int>, int>> Q; // x, y
    vector<pair<pair<int, int>, int>> eatable;
    Q.push({init, 0});
    while(!Q.empty()) {
        pair<pair<int, int>, int> cur = Q.front(); Q.pop();
        pair<int, int> curPos = cur.first;
        int dist = cur.second;
        for(int i=0;i<4;i++) {
            int nx = curPos.first + dx[i];
            int ny = curPos.second + dy[i];
            if(nx<0 || nx>=N || ny<0 || ny>=N) continue;
            if(vis[nx][ny] || arr[nx][ny] > size) continue;
            vis[nx][ny] = 1;
            if (arr[nx][ny] == 0) {
                Q.push({{nx, ny}, dist+1});
            } else if (arr[nx][ny] >= 1 && arr[nx][ny] < size) {
                eatable.push_back({{nx, ny}, dist+1}); // 물고기를 물색해보자~
            } else { // arr[nx][ny] == size
                Q.push({{nx, ny}, dist+1});
            }
        }
    }
    
    if (eatable.size() == 0) {
        return 0; // call mom
    } 
    if (eatable.size() != 1) { // 두 개 이상이면 정렬~
        sort(eatable.begin(), eatable.end(), [](auto& a, auto& b){
            if (a.second == b.second) { // dist 같으면
                if (a.first.first == b.first.first) { // 똑같은 row에 있으면
                    return a.first.second < b.first.second; // 더 왼쪽에 있는 순
                }
                return a.first.first < b.first.first; // 더 위에 있는 순
            }
            return a.second < b.second; // dist 더 작은 순
        });
    }
    auto pos = eatable[0].first;

    arr[pos.first][pos.second] = 0; // 물고기 먹기~
    timeCost += eatable[0].second; // 시간 축내기~
    init = {pos.first, pos.second}; // 내 위치 바꾸기~
    return 1;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    pair<int, int> init = {0, 0}; // x, y
    int size = 2, exp = 2;
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 9) {
                init = {i, j};
                arr[i][j] = 0;
            }
        }
    }

    int timeCost = 0;
    while(bfs(timeCost, init, size) == 1) { // 먹이 먹으면
        exp--;
        if (exp == 0) { // level up!
            size++;
            exp = size;
        }
    }
    cout << timeCost << '\n';
}