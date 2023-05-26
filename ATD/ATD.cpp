#include <iostream>
#include<string>
#include"Header1.h"
using namespace std;
////template <typename t>
////class node {
////
////
////public:
////	node<t>* next;
////	t data;
////	node(t data = t(), node* next = nullptr) {
////		this->data = data;
////		this->next = next;
////	}
////};
////
////   
////template <typename t>
////class circulatedlist {
////	
////protected:
////
////
////	int maxsize;
////	int size;
////	node<t>* head;
////	node<t>* tail;
////public:
////	
////	circulatedlist() {
////		maxsize = 0;
////		size = 0;
////		head = nullptr;
////		tail = nullptr;
////	}
////
////	void setsize() {
////		cout << "enter size :" << endl;
////		cin >> maxsize;
////	}
////	void pushback()
////	{
////		if (size >= maxsize) { 
////			cout << "cannot add element. maximum size exceeded." << endl;
////			return;
////		}
////
////		cout << "enter element you want to add" << endl;
////		t value;
////		cin >> value;
////
////		node<t>* newnode = new node<t>(value);
////		newnode->next = head;
////
////
////		if (head == nullptr) {
////			head = newnode;
////			tail = newnode;
////			tail->next = head;
////
////		}
////
////		else {
////			newnode->next = head;
////			tail->next = newnode;
////			tail = newnode;
////
////		}
////		size++;
////	}
////	//t& operator [](const int index) {
////	/*	node<t>* iter = head;
////		int counter = 1;
////
////		while (counter != index) {
////			iter = iter->next;
////
////			counter += 1;
////		}
////		return iter->data;
////	}*/
////
////	/*void returnelement() {
////		int n;
////		cout << "enter index of element that you want to find:";
////		cin >> n;
////		t element = (*this)[n];
////		cout << "your element with index " << n << " is: " << element << endl;
////	}*/
////	
////
////
////	void getsize() {
////		cout << "size of list: " << size << endl;
////	}
////
////
////
////	
////
////	void findelement() {
////		t value;
////		cout << "enter element value that you want to find:" << endl;
////		cin >> value;
////		int counter = 1;
////		node<t>* iter = head;
////
////		bool elementfound = false;   // змінна, яка вказує, чи було знайдено елемент
////
////		do {
////			if (iter->data == value) {
////				cout << "found an element: " << iter->data << " with index: " << counter << " in that list" << endl;
////				
////				elementfound = true;
////			}
////			iter = iter->next;
////			counter++;
////		} while (iter != head);
////
////		if (!elementfound) {
////			cout << "there is no such an element" << endl;
////		}
////		
////	}
////
////	
////	void insertatindex() {
////		t value;
////		int index;
////		int counter = 1;
////		cout << "enter element:" << endl;
////		cin >> value;
////		cout << "enter index which to replace:";
////		cin >> index;
////		if (index < 1 || index > size + 1) {
////			cout << "invalid index" << endl;
////			return;
////		}
////
////		node<t>* newnode = new node<t>(value);
////
////		if (head == nullptr) {
////			head = newnode;
////			head->next = head;
////			tail = head;
////		}
////		else if (index == 1) {
////			newnode->next = head;
////			head = newnode;
////			tail->next = newnode;
////		}
////		else {
////			node<t>* prev = head;
////			while (counter!= index - 1) {
////				prev = prev->next;
////				counter++;
////			}
////			newnode->next = prev->next;
////			prev->next = newnode;
////			if (prev == tail) {
////				tail = newnode;
////			}
////		}
////
////		size++;
////		
////	}
////
////
////	class iterator {
////	public:
////		iterator(node<t>* start) : current(start) {}
////
////		t& operator*() const {
////			return current->data;
////		}
////
////		iterator& operator++() {
////			current = current->next;
////			return *this;
////		}
////
////		bool operator!=(const iterator& other)  {
////			return current != other.current;
////		}
////		t& getcurrentvalue() const {
////			return current->data; 
////		}
////		t& getnextvalue(iterator& it)  {
////			++it; 
////			return *it; 
////		}
////		
////	private:
////		node<t>* current;
////	};
////
////	iterator begin() const {
////		return iterator(head);
////	}
////
////	iterator end() const {
////		return iterator(tail);
////	}
////	
////};
	
	



	

int main() {
	bool a = true;
	bool a1 = true;
	int choice, choice2, choice3;

	cout << "Which type you wanna add?\n1-int\n2-float\n3-string" << endl;
	cin >> choice2;
	CirculatedList<int> obj1;


	CirculatedList<float> obj2;

	CirculatedList<string> obj3;
	CirculatedList<int>::Iterator it = obj1.begin();
	CirculatedList<float>::Iterator it1 = obj2.begin();
	CirculatedList<string>::Iterator it2 = obj3.begin();


	
	while (a) {
		
		if (choice2 == 1) {
			if (a1) {
				obj1.setsize();
				a1 = false;
			}
			cout << "\nwhat you want to change?\n1-set a new element\n2-get a size of a circulated list\n3-find an element with value in list\n4-set element with index\n5-get the first element\n6-move to the next \n7-get the current element value \n8-get the end of list  " << endl;
			cin >> choice;
			
			if (choice == 1) {

				obj1.pushback();
			}
			if (choice == 2) {
				obj1.getSize();
			}
			
			if (choice == 3) {
				obj1.findelement();
			}
			if (choice == 4) {
				obj1.insertAtIndex();
			}
			if (choice == 5) {
				
				 it = obj1.begin();
				cout << *it << endl;
			}
			if (choice == 6) {
				*it = it.getNextValue(it);
				cout << *it << endl;
			}
			if (choice == 7) {
				*it = it.getCurrentValue();
				cout << *it << endl;
			}
			if (choice == 8) {
				it = obj1.end();
				cout << *it;
			}
		}
		if (choice2 == 2) {
			if (a1) {
				obj2.setsize();
				a1 = false;
			}
			cout << "\nwhat you want to change?\n1-set a new element\n2-get a size of a circulated list\n3-find an element with value in list\n4-set element with index\n5-get the first element\n6-move to the next \n7-get the current element value \n8-get the end of list  " << endl;
			cin >> choice;
			if (choice == 1) {

				obj2.pushback();
			}
			if (choice == 2) {
				obj2.getSize();
			}
			
			if (choice == 3) {
				obj2.findelement();
			}
			if (choice == 4) {
				obj2.insertAtIndex();
			}
			if (choice == 5) {

				it1 = obj2.begin();
				cout << *it1 << endl;
			}
			if (choice == 6) {
				*it1 = it1.getNextValue(it1);
				cout << *it1 << endl;
			}
			if (choice == 7) {
				*it1 = it1.getCurrentValue();
				cout << *it1 << endl;
			}
			if (choice == 8) {
				it1 = obj2.end();
				cout << *it1<<endl;
			}
		}
		if (choice2 == 3) {
			if (a1) {
				obj3.setsize();
				a1 = false;
			}
			cout << "\nwhat you want to change?\n1-set a new element\n2-get a size of a circulated list\n3-find an element with value in list\n4-set element with index\n5-get the first element\n6-move to the next \n7-get the current element value \n8-get the end of list  " << endl;
			cin >> choice;
			if (choice == 1) {

				obj3.pushback();
			}
			if (choice == 2) {
				obj3.getSize();
			}
			
			if (choice == 3) {
				obj3.findelement();
			}
			if (choice == 4) {
				obj3.insertAtIndex();
			}
			if (choice == 5) {

				it2 = obj3.begin();
				cout << *it2 << endl;
			}
			if (choice == 6) {
				*it2 = it2.getNextValue(it2);
				cout << *it2 << endl;
			}
			if (choice == 7) {
				*it2 = it2.getCurrentValue();
				cout << *it2<< endl;
			}
			if (choice == 8) {
				it2 = obj3.end();
				cout << *it2 << endl;
			}
		}
	}
}