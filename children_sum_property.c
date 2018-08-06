//For every node, data value must be equal to sum of data values in left and right children.
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node * left;
	struct node * right;
}node;

void build(int data, node ** ptr) {
	node * tmp = (node *) malloc(sizeof(node));
	tmp->data = data;
	tmp->left = NULL;
	tmp->right = NULL;
	*ptr = tmp;
}

int find(node * ptr) {
	int l, r;
	l = -1;
	r = -1;
	if(!ptr)
		return ;
	if(ptr->left)
		l = ptr->left->data;
	if(ptr->right)
		r = ptr->right->data;
	printf("%d %d %d\n",ptr->data,l,r);
	if(ptr->data != l+r)
		return 0;
	find(ptr->left);
	find(ptr->right);
	return 1;
}
int main() {
	int flag;
	node * root;
	build(5,&root);
	build(2,&root->left);
	build(3,&root->right);
	build(1,&root->left->left);
	build(1,&root->left->right);
	flag = find(root);
	if(flag)
		printf("yes");
	else
		printf("no");
	return 0;
}
