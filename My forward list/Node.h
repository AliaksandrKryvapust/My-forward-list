#pragma once

template <typename T1>
class Node{
public:
	Node* nextptr;
	T1 data;

	Node(T1 data = T1(), Node* nextptr = nullptr);
	
};
