/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *temp=head,*temp1=head;
	int swapvar;
	if(head!=NULL)
	{
		if (head->next != NULL)
		{
			while (temp1->next != NULL)
			{
				temp = head;
				while (temp->next != NULL)
				{
					if (temp->num > temp->next->num)
					{
						swapvar = temp->next->num;
						temp->next->num = temp->num;
						temp->num = swapvar;
					}
					temp = temp->next;
				}
				temp1=temp1->next;
			}
		}
		return head;
	}
	return NULL;
}