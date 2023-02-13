#include <bits/stdc++.h>
using namespace std;
int n, m;
int input[8][8], memo[8][8];

struct Camera {
	int num;
	int x;
	int y;
	int angle;
};

Camera tmp_cam;
vector<Camera> cameras;

int find_empty()
{
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (memo[i][j] == 0) cnt++;
		}
	}
	return cnt;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> input[i][j];
			if (input[i][j] > 0 && input[i][j] < 6) {
				memo[i][j] = 1;
				tmp_cam.num = input[i][j];
				tmp_cam.x = i;
				tmp_cam.y = j;
				tmp_cam.angle = 1;
				if (input[i][j] == 2) tmp_cam.angle = 3;
				else if (input[i][j] == 5) tmp_cam.angle = 4;
				cameras.emplace_back(tmp_cam);
			}

		}
	}
}