#include <bits/stdc++.h>
using namespace std;

int dx[] = { 0, 0, 0, 1, -1 };
int dy[] = { 0, -1, 1, 0, 0 };

struct Shark { int r, c, s, d, z; };
int R, C, M, idx = 0, sum = 0;

vector<Shark> sharks;
vector<vector<int>> space, tmp;

int RevDir(int d) {
	return (d <= 2) ? ((d == 1) ? 2 : 1) : ((d == 3) ? 4 : 3);
}

void SetRC(Shark& s, bool isR) {
	s.r += (dy[s.d] * s.s);
	s.c += (dx[s.d] * s.s);
	int rc = isR ? R : C;
	int* psRC = isR ? &s.r : &s.c;
	while (*psRC < 0 || *psRC >= rc) {
		s.d = RevDir(s.d);
		if (*psRC < 0) *psRC = abs(*psRC);
		else if (*psRC >= rc) *psRC = (2 * rc - *psRC - 2);
	}
}

void Move(Shark& s) {
	if (tmp[s.r][s.c] == -1) tmp[s.r][s.c] = idx;
	else {
		if (sharks[tmp[s.r][s.c]].z > s.z) s.r = -1, s.c = -1;
		else {
			sharks[tmp[s.r][s.c]].r = -1;
			sharks[tmp[s.r][s.c]].c = -1;
			tmp[s.r][s.c] = idx;
		}
	}
}

void AllSharksMove() {
	tmp.assign(R, vector<int>(C, -1));
	idx = -1;
	for (auto& s : sharks) {
		idx++;
		if (s.r == -1 && s.c == -1) continue;
		SetRC(s, (s.d <= 2));
		Move(s);
	}
	space = tmp;
}

void GetShark(int j) {
	for (int i = 0; i < R; i++) {
		if (space[i][j] != -1) {
			sum += sharks[space[i][j]].z;
			sharks[space[i][j]].r = -1;
			sharks[space[i][j]].c = -1;
			break;
		}
	}
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> R >> C >> M;
	space.assign(R, vector<int>(C, -1));
	sharks.assign(M, Shark());
	for (auto& s : sharks) {
		cin >> s.r >> s.c >> s.s >> s.d >> s.z;
		space[--s.r][--s.c] = idx++;
	}
	for (int j = 0; j < C; j++) {
		GetShark(j);
		AllSharksMove();
	}
	cout << sum;
}