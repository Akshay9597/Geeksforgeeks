#include <iostream>
using namespace std;

typedef struct node {
	int d;
	struct node * left;
	struct node * right;
} node;
typedef node * tree;
void init(tree * head) {
	* head = NULL;
}
void insert(tree * head, int d) {
	node * tmp = new node;
	tmp->d = d;
	tmp->left = NULL;
	tmp->right = NULL;
	if(*head == NULL){
		*head = tmp;
		//cout << head->d;
	}
}
void printTree(tree head) {
	cout << "printing...";
	node * tmp;
	tmp = head;
	while(tmp != NULL) {
		cout << "ininin";
		cout << tmp->d << endl;
		tmp = tmp->left;
	}
}
int main() {
	int d;
	tree head;
	init(&head);
	/*
	while(1) {
		cin >> d;
		if(d == 0)
			break;
		else
			insert(head,d);
		printTree(head);
	}*/
	insert(&head,2);
	printTree(head);
	
	return 0;
}
