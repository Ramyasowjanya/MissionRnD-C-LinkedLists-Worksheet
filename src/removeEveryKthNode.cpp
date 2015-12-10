/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<stdlib.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int k) {
	struct node *temp = head, *temp1=head ; int i = 1;
	if (k > 0 && head != NULL)
	{
		if (k == 1)
		{
			free(head);
			return NULL;
		}
		while (temp != NULL)
		{
			if (i != k)
			{
				i++;
				temp1=temp;
				temp = temp->next;
			}
			if (i == k)
			{
				if (temp != NULL){
					temp1->next = temp->next;
					free(temp);
					temp = temp1->next;
					i = 1;
				}
			}
		}
		return head;
	}
	return NULL;
}