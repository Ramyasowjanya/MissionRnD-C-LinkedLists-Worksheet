/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *p = NULL, *q;
	int n;
	if (N < 0)
		N = -N;
	else if (N == 0)
	{
		p = (struct node*)malloc(sizeof(struct node));
		p->num = N;
		p->next = NULL;
		return p;
	}
	while (N != 0)
	{
		n = N % 10;
		if (p == NULL)
		{
			p = (struct node*)malloc(sizeof(struct node));
			p->num = n;
			p->next = NULL;
		}
		else
		{
			q = (struct node*)malloc(sizeof(struct node));
			q->num = n;
			q->next = p;
			p = q;
		}
		N = N / 10;
	}
	return p;
}