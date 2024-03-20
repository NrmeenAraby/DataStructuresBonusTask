#pragma once
#include<iostream>
template<class T>
class node
{
public:
	T val;
	node<T>* next;
	node()
	{
		val = T();
		next = NULL;
	}
	node(T data)
	{
		val = data;
		next = NULL;
	}
};

