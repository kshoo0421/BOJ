#include <bits/stdc++.h>
using namespace std;

int R, C;
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

char maze[1002][1002];
int chk[1002][1002];
int fire_chk[1002][1002];

queue<pair<int, int>> fire;
queue<pair<int, int>> q;

void Fire_move() {
	while (!fire.empty()) {
		int fy = fire.front().first;
		int fx = fire.front().second;

		if (!fire_chk[fy][fx]) {
			fire_chk[fy][fx] = true;
		}
		fire.pop();

		for (int i = 0; i < 4; i++) {
			int ffy = fy + dy[i];
			int ffx = fx + dx[i];

			if (ffy < 0 || ffy >= R || ffx < 0 || ffx >= C)
				continue;

			if (!fire_chk[ffy][ffx] && maze[ffy][ffx] != '#') {
				fire.push(make_pair(ffy, ffx));
				fire_chk[ffy][ffx] = fire_chk[fy][fx] + 1;
			}
		}
	}
}

int Jihoon_move() {

	chk[q.front().first][q.front().second] = true;

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		if (y == 0 || x == 0 || y == R - 1 || x == C - 1) {
			return chk[y][x];
		}

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || ny >= R || nx < 0 || nx >= C)
				continue;

			if (maze[ny][nx] == '.' && !chk[ny][nx]) {
				if (fire_chk[ny][nx] > chk[y][x] + 1 || fire_chk[ny][nx] == 0) {
					chk[ny][nx] = chk[y][x] + 1;
					q.push(make_pair(ny, nx));
				}
			}
		}
	}
	return -1;
}

void input() {
	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'J') {
				q.push(make_pair(i, j));
			}
			else if (maze[i][j] == 'F') {
				fire.push(make_pair(i, j));
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	input();

	int fdx = fire.size();
	Fire_move();

	int result = Jihoon_move();
	if (result == -1)
		cout << "IMPOSSIBLE" << "\n";
	else
		cout << result << "\n";
}