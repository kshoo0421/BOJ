#include <iostream>
using namespace std;

typedef struct node {
	int left, right;
} Node;

Node Nodes[26];

void preorder(int cur)
{
	cout << (char)(cur + 'A');
	if (Nodes[cur].left != -1)
		preorder(Nodes[cur].left);
	if (Nodes[cur].right != -1)
		preorder(Nodes[cur].right);
	return;
}

void inorder(int cur)
{
	if (Nodes[cur].left != -1)
		inorder(Nodes[cur].left);
	cout << (char)(cur + 'A');
	if (Nodes[cur].right != -1)
		inorder(Nodes[cur].right);
	return;
}

void postorder(int cur)
{
	if (Nodes[cur].left != -1)
		postorder(Nodes[cur].left);
	if (Nodes[cur].right != -1)
		postorder(Nodes[cur].right);
	cout << (char)(cur + 'A');
	return;
}

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n;

	for (int i = 0; i < 26; i++)
		Nodes[i].left = Nodes[i].right = -1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char p, l, r;
		cin >> p >> l >> r;
		if (l != '.') Nodes[p - 'A'].left = l - 'A';
		if (r != '.') Nodes[p - 'A'].right= r - 'A';
	}

	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postorder(0);

	return 0;
}