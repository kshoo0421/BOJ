#include <bits/stdc++.h>
using namespace std;
#define X second
#define Y first

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int N, M, cx, cy, nx, ny, result;
vector<vector<int>> nm_map;

void bfs(vector<vector<int>>& vvi, int y, int x) {
    queue<pair<int, int>> q;
    q.push(make_pair(y, x));
    vvi[y][x] = 1;
    while (!q.empty()) {
        cy = q.front().Y;
        cx = q.front().X;
        q.pop();
        for (int i = 0; i < 4; i++) {
            nx = cx + dx[i];
            ny = cy + dy[i];
            if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
                if (nm_map[ny][nx] != 1)
                    if(vvi[ny][nx] > vvi[cy][cx] + 1 || vvi[ny][nx] == -1) {
                    vvi[ny][nx] = vvi[cy][cx] + 1;
                    q.push(make_pair(ny, nx));
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    string s;
    cin >> N >> M;
    nm_map.assign(N, vector<int>(M));
    vector<vector<int>> bef(N, vector<int>(M, -1)), aft; aft = bef;
    queue<pair<int, int>> walls;

    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < M; j++) {
            nm_map[i][j] = s[j] - '0';
            if (nm_map[i][j] == 1) walls.push(make_pair(i, j));
        }
    }

    bfs(bef, 0, 0);
    bfs(aft, N - 1, M - 1);

    result = bef[N - 1][M - 1];
    while (!walls.empty()) {
        int mb = -1, ma = -1; // min_before; min_after
        cy = walls.front().Y;
        cx = walls.front().X;
        walls.pop();
        for (int i = 0; i < 4; i++) {
            ny = cy + dy[i];
            nx = cx + dx[i];
            if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
                if (bef[ny][nx] > 0) {
                    if (mb == -1) mb= bef[ny][nx];
                    else mb = min(mb, bef[ny][nx]);
                }
                
                if (aft[ny][nx] > 0) {
                    if (ma == -1) ma = aft[ny][nx];
                    else ma = min(ma, aft[ny][nx]);
                }
            }
        }
        if (ma != -1 && mb != -1) {
            if (result == -1) result = mb + ma + 1;
            else result = min(result, mb + ma + 1);
        }
    }
    cout << result;
    return 0;
}
