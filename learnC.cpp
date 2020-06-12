#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	typedef int elemtype;
	typedef struct LNODE
	{
		elemtype data;
		struct LNODE *next;
	}link,*linklist;
	link *p;
	link* head = new link;
	head->next = NULL;
	p = head;

	for (int i = 1;i <= 10;i++)
	{
		link* a = new link;
		a->data = i;
		a->next = p->next;
		p->next=a;
	}
	cout << p->next->next->data;
	return 0;
}