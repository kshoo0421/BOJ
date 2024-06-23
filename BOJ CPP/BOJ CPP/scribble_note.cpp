#include <bits/stdc++.h>
#define NIL 0


typedef struct tree {
	int key;
	Tree* left;
	Tree* right;
} Tree;

Tree* Search(Tree* t, int x) {
	if (t == NIL || t->key) return t;
	if (x < t->key) return Search(t->left, x);
	else return Search(t->right, x);
}

Tree* TreeMinimum(Tree* x) {
	while (x->left != NIL) x = x->left;
	return x;
}

Tree* TreeMaximum(Tree* x) {
	while (x->right != NIL) x = x->right;
	return x;
}

Tree* Insert(Tree* t, int x) {
	if (t == NIL) {
		Tree* r = (Tree*)malloc(sizeof(Tree));
		r->key = x;
		return r;
	}
	if (x < t->key) t->left = Insert(t->left, x);
	else t->right = Insert(t->right, x);
	return t;
}

bool isLeafNode(Tree* r) {
	return true;
}

bool has1Child(Tree* r) {
	return true;
}

void DeleteNode(Tree* r) {

}

void LinkChildToParent(Tree* r) {

}

void RemoveMinNode_CopyKey(Tree* r) {

}


void SketchDelete(Tree* t, Tree* r) {
	if (isLeafNode(r)) DeleteNode(r);
	else if (has1Child(r)) LinkChildToParent(r);
	else RemoveMinNode_CopyKey(r);
}

Tree* FindLeafToInsert(int x) {
	
}

bool TryInsert(Tree* r, int x) {

}

bool SibHasExtra(Tree* r) {

}

void PassKey(Tree* r) {
	
}
Tree* DivHalfPassKey(Tree* r) {

}

bool isOverflowed(Tree* x) {

}

void ClearOverflow(Tree* r) {
	if (SibHasExtra(r)) PassKey(r);
	else {
		Tree* x = DivHalfPassKey(r);
		if (isOverflowed(x)) ClearOverflow(x);
	}
}

void BTreeInsert(Tree* t, int x) {
	Tree* r = FindLeafToInsert(x);
	bool isOverflowed = TryInsert(r, x);
	if (isOverflowed) ClearOverflow(r);
}

void Swap(int* x, int* y) {

}
bool isLeaf(int x) {

}

Tree* FindLeafY(int x) {

}

Tree* DeletedNode(int x) {

}

void BTreeDelete(Tree* t, int x, Tree* r) {
	if (!isLeaf(x)) {
		Tree* leaf = FindLeafY(x);
		int y = leaf->key;
		Swap(&x, &y);
	}
	r = DeletedNode(x);
	if (IsUnderflowed(r)) clearUnderflow(r);
}

void clearUnderflow(Tree* r) {
	if (SibHasExtra(r)) PassKey(r);
	else {
		Tree* p = MergeAndPassKey(r);
		if (IsUnderflowed(p)) clearUnderflow(p);
	}
}