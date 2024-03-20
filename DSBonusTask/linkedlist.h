#pragma once
#include"node.h"
template<class T>
class linkedlist
{
public:
	node<T>*head;
	node<T>*tail;
	int size;
	linkedlist();
	void insert(T);
	T getMin();
	void display();
	void merge(linkedlist);
	linkedlist intersection(linkedlist);
};

