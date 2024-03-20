#include "linkedlist.h"
#include"node.h"
#include<assert.h>
#include<map>
#include<iostream>
using namespace std;
template<class T>
linkedlist<T>::linkedlist()
{
	size = 0;
	head = tail = NULL;
}
template<class T>
void linkedlist<T>::insert(T val)
{
	node<T>* nd = new node<T>(val);
	if (size == 0)
	{
		head = nd;
		tail = nd;
	}
	else
	{
		node<T>* temp = head;
		node<T>* t = head;
		int cntr = 0;
		while (temp!=NULL)
		{
			if ( val < temp->val)
				break;
			 t = temp;
			temp = temp->next;
			cntr++;
		}
		if (cntr == 0)
		{
				nd->next = temp;
				head = nd;	
		}
		else if (cntr == size )
		{
			t->next = nd;
			tail = nd;
		}
		else
		{
			nd->next = t->next;
			t->next = nd;
		}
	}
	size++;
}
template<class T>
T linkedlist<T>::getMin()
{
	assert(size > 0);
	return head->val;
}
template<class T>
void linkedlist<T>::display()
{
	node<T>* temp = head;
	for (int i = 0; i < size; i++)
	{
		cout << temp->val << "\n";
		temp = temp->next;
	}
}
template<class T>
void linkedlist<T>::merge(linkedlist sl)
{
	node<T>* temp = sl.head;
	while (temp != NULL)
	{
		insert(temp->val);
		temp = temp->next;
	}
}
template<class T>
linkedlist<T> linkedlist<T>::intersection(linkedlist lst)
{
	linkedlist<T> lt;
	map<T, int>frequancy;
	node<T>* temp = lst.head;
	while (temp != NULL)
	{
		frequancy[temp->val] = 1;
		temp = temp->next;
	}
	temp = head;
	while (temp != NULL)
	{
		if (frequancy[temp->val] == 1)
			lt.insert(temp->val);
		temp = temp->next;
	}
	return lt;
}