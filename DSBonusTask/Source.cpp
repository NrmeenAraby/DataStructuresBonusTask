#include<iostream>
#include"linkedlist.h"
#include"linkedlist.cpp"
using namespace std;
int main()
{
	linkedlist<string>l,sl;
	l.insert("a");
	l.insert("d");
	l.insert("b");
	l.insert("c");

	sl.insert("d");
	sl.insert("a");
	
	cout<<"MIN: "<<l.getMin() << "\n";
	cout << "list l : ";
	l.display();
	cout << "---------\n";
	linkedlist<string>tmp= l.intersection(sl);
	cout << "intersection: ";
	tmp.display();
	cout << "---------\n";
	l.merge(sl);
	cout << "after merging : ";
	l.display();
	return 0;
}