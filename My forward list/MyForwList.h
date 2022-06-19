#pragma once
#include "Node.h"
template <typename T1>
class MyForwList{
	int Size;
	Node<T1>* head;
public:
	MyForwList();
	~MyForwList();
	void push_back(T1 data);
	int GetSize();
	T1& operator [](const int index);
	void pop_front();
	void clear();
	void push_front(T1 data);
	void insert(T1 data, int index);
	void remove_at(int index);
	void pop_back();
};

