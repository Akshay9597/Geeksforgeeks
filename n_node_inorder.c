#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node * left;
	struct node * right;
}node;

void storen(int data, node ** ptr) {
	node * tmp = (node *) malloc(sizeof(node));
	tmp->data = data;
	tmp->left = NULL;
	tmp->right = NULL;
	*ptr = tmp;
}
int count = 1;
void findn(int pos, node * root) {
	if(root == NULL)
		return;
	findn(pos,root->left);
	if(count == pos)
		printf("%d",root->data);
	count++;
	findn(pos,root->right);
}
int main() {
	node * root;
	storen(0,&root);
	storen(1,&root->left);
	storen(5,&root->right);
	storen(3,&root->left->left);
	storen(8,&root->left->right);
	int n;
	scanf("%d",&n);
	findn(n,root);
	return 0;
}
