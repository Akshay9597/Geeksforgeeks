/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* The structure of the Linked list Node is as follows:
struct Node {
    int val;
    struct Node* next;
}; */
void intersection(Node **head1, Node **head2,Node **head3)
{
    // Your Code Here
    *head3 = NULL;
    struct Node *tmp1, *tmp2;
    while(*head1 == NULL && *head2 == NULL) {
        if((*head1)->val >= (*head2)->val) {
            if((*head1)->val == (*head2)->val) {
                tmp1 = (struct Node *) malloc (sizeof(struct Node));
                 if(*head3 == NULL) {
                    *head3 = tmp1;
                    tmp2 = tmp1;
                }
                tmp1->next = NULL;
                tmp1->val = (*head2)->val;
                tmp2->next = tmp1;
                tmp2 = tmp1;
            }
            else
                *head2 = (*head2)->next;
        }
        else {
           if((*head1)->val == (*head2)->val) {
                tmp1 = (struct Node *) malloc (sizeof(struct Node));
                 if(*head3 == NULL) {
                    *head3 = tmp1;
                    tmp2 = tmp1;
                }
                tmp1->next = NULL;
                tmp1->val = (*head2)->val;
                tmp2->next = tmp1;
                tmp2 = tmp1;
            }
            else
                *head1 = (*head1)->next;
        }
    }
} 
