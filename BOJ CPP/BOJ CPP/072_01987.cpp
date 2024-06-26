#include <bits/stdc++.h>
using namespace std;

int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };

int R, C, cx, cy, nx, ny, mx = 0;
string cs, ns;

struct IIS {
	int X;
	int Y;
	string S;
};

vector<vector<char>> space;
vector<vector<bool>> isVisited;
stack<IIS> stk;
map<char, bool> done;

void dfs() {
	cs = "";
	cs += space[0][0];
	stk.push({0, 0, cs});
	isVisited[0][0] = true;
	done[space[0][0]] = true;
	while (!stk.empty()) {
		cx = stk.top().X;
		cy = stk.top().Y;
		cs = stk.top().S;
		stk.pop();
		for (int i = 0; i < 4; i++) {
			nx = cx + dx[i];
			ny = cy + dy[i];
			if (nx >= 0 && nx < C && ny >= 0 && ny < R) {
				bool isContinue= false;
				if (isVisited[ny][nx] == 0) {
					for (char c : cs) {
						if (c == space[ny][nx]) {
							isContinue= true;
							break;
						}
					}
					if (isContinue) continue;
					ns = cs + space[ny][nx];
					stk.push({ nx, ny, ns });
					isVisited[ny][nx] = true;
					mx = max(mx, (int)ns.size());
					cout << ns << "\n";
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	string input;
	cin >> R >> C;
	space.assign(R, vector<char>(C));
	isVisited.assign(R, vector<bool>(C));
	for (int i = 0; i < R; i++) {
		cin >> input;
		for (int j = 0; j < C; j++) {
			space[i][j] = input[j];
			done[space[i][j]] = false;
		}
	}
	dfs();
	cout << mx;
}