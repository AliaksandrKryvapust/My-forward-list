#include "Node.h"
template <typename T1>
Node<T1>::Node(T1 data, Node* nextptr) {
	this->data = data;
	this->nextptr = nextptr;
}
