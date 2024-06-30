#include <bits/stdc++.h>
using namespace std;
int n, shark = 2, cur_x, cur_y, cx, cy, nx, ny, ccnt, ncnt, ate_fish, result = 0;
int space[20][20], memo[20][20];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

struct possible
{
	int time;
	int x;
	int y;
};

int cmp(possible p1, possible p2)
{
	if (p1.time != p2.time) return p1.time < p2.time;
	if (p1.y != p2.y) return p1.y < p2.y;
	return p1.x < p2.x;
}

queue<possible> q;
vector<possible> vp;
possible tmpP;

bool EatFish()
{
	for (int i = 0; i < 20; i++) for (int j = 0; j < 20; j++) memo[i][j] = 0;
	tmpP.time = 0;
	tmpP.x = cur_x;
	tmpP.y = cur_y;
	q.push(tmpP);
	while (!q.empty())
	{
		ccnt = q.front().time;
		cx = q.front().x;
		cy = q.front().y;
		q.pop();
		if (memo[cy][cx] == 1) continue;
		memo[cy][cx] = 1;
		for (int i = 0; i < 4; i++)
		{
			nx = cx + dx[i];
			ny = cy + dy[i];
			ncnt = ccnt + 1;
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if (memo[ny][nx] == 1 || space[ny][nx] > shark) continue;

			if (space[ny][nx] == shark || space[ny][nx] == 0)
			{
				tmpP.time = ncnt;
				tmpP.x = nx;
				tmpP.y = ny;
				q.push(tmpP);
			}
			else
			{
				tmpP.time = ncnt;
				tmpP.x = nx;
				tmpP.y = ny;
				vp.emplace_back(tmpP);
			}
		}
	}
	if (vp.size() == 0) return true;
	sort(vp.begin(), vp.end(), cmp);
	cur_x = vp[0].x;
	cur_y = vp[0].y;
	space[cur_y][cur_x] = 0;
	result += vp[0].time;
	ate_fish++;
	if (shark == ate_fish)
	{
		ate_fish = 0;
		shark++;
	}
	vp.clear();
	return false;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> space[i][j];
			if (space[i][j] == 9)
			{
				cur_x = j;
				cur_y = i;
				space[i][j] = 0;
			}
		}
	}
	while (1) { if (EatFish()) break; }
	cout << result;
}