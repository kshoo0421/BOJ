#include <bits/stdc++.h>
using namespace std;
int tmp;

struct Person
{
	bool vis = false;
	vector<int> parent;
	vector<int> sublings;
};

vector<Person> people;

int find_in_siblings(int start, int goal, int cnt)
{
	people[start].vis = true;
	for (int i : people[start].sublings)
	{
		if (i == goal) return cnt + 1;
		if (people[i].vis) continue;
		tmp = find_in_siblings(i, goal, cnt + 1);
		if (tmp != -1) return tmp;
	}
	return -1;
}

int find_person(int start, int goal, int cnt)
{
	if (start == goal) return cnt;
	people[start].vis = true;
	for (int i : people[start].sublings)
	{
		if (i == goal) return cnt + 1;
		if (people[i].vis) continue;
		tmp = find_in_siblings(i, goal, cnt + 1);
		if (tmp != -1) return tmp;
	}
	if (people[start].parent.size() == 0) return -1;
	return find_person(people[start].parent[0], goal, cnt + 1);
}


int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n, m, p1, p2, t1, t2;
	cin >> n >> p1 >> p2 >> m;
	people.resize(n + 1);
	while (m--)
	{
		cin >> t1 >> t2;
		people[t1].sublings.emplace_back(t2);
		people[t2].parent.emplace_back(t1);
	}
	cout << find_person(p1, p2, 0);
}