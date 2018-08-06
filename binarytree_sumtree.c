//For every node, data value must be equal to sum of data values of nodes in left and right trees.
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node * left;
	struct node * right;
}node;
int findsum(node*,node*);
void build(int data, node ** ptr) {
	node * tmp = (node *) malloc(sizeof(node));
	tmp->data = data;
	tmp->left = NULL;
	tmp->right = NULL;
	*ptr = tmp;
}

int find(node * ptr) {
	int sum;
	if(!ptr)
		return;
	sum = findsum(ptr->left,ptr->right);
	if(sum != ptr->data)
		return 0;
	if(ptr->left)
		find(ptr->left);
	if(ptr->right)
		find(ptr->right);
	return 1;
}
int findsum(node *ptrleft, node* ptrright) {
	static int sum = 0;
	if(ptrleft==NULL && ptrright == NULL)
		return sum;
	if(ptrleft) {
		sum = sum+ptrleft->data;
		findsum(ptrleft->left,ptrleft->right);
	}
	if(ptrright) {
		sum = sum+ptrright->data;
		findsum(ptrright->left,ptrright->right);
	}
}
int main() {
	int flag;
	node * root;
	build(8,&root);
	build(4,&root->left);
	build(0,&root->right);
	build(2,&root->left->left);
	build(2,&root->left->right);
	flag = find(root);
	if(flag)
		printf("yes");
	else
		printf("no");
	return 0;
}
