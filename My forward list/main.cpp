#include<iostream>
#include "MyForwList.h"
#include "MyForwList.cpp"
#include "Node.cpp"
using namespace std;

int main() {
	MyForwList<int> example;
	example.push_back(5);
	example.push_back(10);
	example.push_back(22);
	cout << example.GetSize() << endl;
	example.pop_front();
	for (int i = 0; i < example.GetSize(); i++)
		cout << example[i] << "\t";
	cout << '\n' << example.GetSize() << endl;
	example.push_front(2);
	return 0;
}