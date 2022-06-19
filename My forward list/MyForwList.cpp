#include "MyForwList.h"

template<typename T1>
MyForwList<T1>::MyForwList(){
	Size = 0;
	head = nullptr;
}
template<typename T1>
MyForwList<T1>::~MyForwList(){
	clear();
}
template<typename T1>
void MyForwList<T1>::push_back(T1 data){
	if (head == nullptr)
	{ head = new Node<T1>(data); }
	else {
		Node<T1>* current = this->head;
		while (current->nextptr != nullptr) 
		{ current = current->nextptr; }
		current->nextptr = new Node<T1>(data);
	}
	Size++;
}
template<typename T1>
int MyForwList<T1>::GetSize()	{ return Size; }
template<typename T1>
T1& MyForwList<T1>::operator[](const int index){
	int counter = 0;
	Node<T1>* current = this->head;
	while (current != nullptr) {
		if (counter == index)
		{	return current->data;	}
		current = current->nextptr;
		counter++;
	}
}
template<typename T1>
void MyForwList<T1>::pop_front() {
	if (head!=nullptr) {	/* or Size>0 */
		Node<T1>* temp = head;
		head = head->nextptr;
		delete temp;
		Size--;
	}
	
}
template<typename T1>
void MyForwList<T1>::clear(){
	while (Size)  	{ /*int variable Size will become false when get to 0*/
		Node<T1>* temp = head; 
		head = head->nextptr;
		delete temp;
	};
	Size = 0;
}
template<typename T1>
void MyForwList<T1>::push_front(T1 data){
	head = new Node<T1>(data, head); // ( , head) here it`s a pointer to ex-head list object
	Size++;
}
template<typename T1>
void MyForwList<T1>::insert(T1 data, int index){
	if (index == 0)
		push_front(data);
	else {
		Node<T1>* previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{ previous = previous->nextptr; }
		Node<T1>* newCell = new Node<T1>(data, previous->nextptr); // here we assign nextptr to a next Node
		previous->nextptr = newCell;
		Size++;
	}
}
template<typename T1>
void MyForwList<T1>::remove_at(int index){
	if (index == 0)
		pop_front();
	else {
		Node<T1>* previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{ previous = previous->nextptr;	}
		Node<T1>* toDelete = previous->nextptr; // nextptr to a next Node
		previous->nextptr = toDelete->nextptr; // assign previous nextptr to next+1 Node
		delete toDelete;
		Size--;
	}
}
template<typename T1>
void MyForwList<T1>::pop_back(){
	remove_at(Size - 1);
}
