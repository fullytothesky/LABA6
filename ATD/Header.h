#pragma once
#include<iostream>
using namespace std;
template <typename T>
class Node {


public:
	Node<T>* next;
	T data;
	Node(T data = T(), Node* next = nullptr);/*{
		this->data = data;
		this->next = next;
	}*/
};

template <typename T>
class CirculatedList {

private:

	
	
	int maxsize;
	int size;
	Node<T>* head;
	Node<T>* tail;
public:

	CirculatedList(); /*{
		maxsize = 0;
		size = 0;
		head = nullptr;
		tail = nullptr;
	}*/

	void setsize(); /*{
		cout << "enter size :" << endl;
		cin >> maxsize;
	}*/
	void pushback();
	/*{
		if (size >= maxsize) {
			cout << "Cannot add element. Maximum size exceeded." << endl;
			return;
		}

		cout << "Enter element you want to add" << endl;
		T value;
		cin >> value;

		Node<T>* newnode = new Node<T>(value);
		newnode->next = head;


		if (head == nullptr) {
			head = newnode;
			tail = newnode;
			tail->next = head;

		}

		else {
			newnode->next = head;
			tail->next = newnode;
			tail = newnode;

		}
		size++;
	}*/


	//T& operator [](const int index) {   ne
	/*	Node<T>* iter = head;
		int counter = 1;

		while (counter != index) {
			iter = iter->next;

			counter += 1;
		}
		return iter->data;
	}*/

	/*void returnelement() {         ne
		int n;
		cout << "enter index of element that you want to find:";
		cin >> n;
		T element = (*this)[n];
		cout << "Your element with index " << n << " is: " << element << endl;
	}*/



	void getSize(); 
	/*{
		cout << "size of list: " << size << endl;
	}*/





	void findelement(); 
	//{
	//	T value;
	//	cout << "Enter element value that you want to find:" << endl;
	//	cin >> value;
	//	int counter = 1;
	//	Node<T>* iter = head;

	//	bool elementFound = false;   // «м≥нна, €ка вказуЇ, чи було знайдено елемент

	//	do {
	//		if (iter->data == value) {
	//			cout << "Found an element: " << iter->data << " with index: " << counter << " in that list" << endl;

	//			elementFound = true;
	//		}
	//		iter = iter->next;
	//		counter++;
	//	} while (iter != head);

	//	if (!elementFound) {
	//		cout << "There is no such an element" << endl;
	//	}

	//}


	void insertAtIndex();/* {
		T value;
		int index;
		int counter = 1;
		cout << "enter element:" << endl;
		cin >> value;
		cout << "enter index which to replace:";
		cin >> index;
		if (index < 1 || index > size + 1) {
			cout << "invalid index" << endl;
			return;
		}

		Node<T>* newNode = new Node<T>(value);

		if (head == nullptr) {
			head = newNode;
			head->next = head;
			tail = head;
		}
		else if (index == 1) {
			newNode->next = head;
			head = newNode;
			tail->next = newNode;
		}
		else {
			Node<T>* prev = head;
			while (counter != index - 1) {
				prev = prev->next;
				counter++;
			}
			newNode->next = prev->next;
			prev->next = newNode;
			if (prev == tail) {
				tail = newNode;
			}
		}

		size++;

	}*/


	class Iterator {
	public:
		Iterator(Node<T>* start) : current(start) {}

		T& operator*() const;/*{
			return current->data;
		}*/

		Iterator& operator++();/*{
			current = current->next;
			return *this;
		}*/

		
		T& getCurrentValue() const ;
		/*{
			return current->data;
		}*/
		T& getNextValue(Iterator& it);/* {
			++it;
			return *it;
		}*/

	private:
		Node<T>* current;
	};

	Iterator begin() const;/*{
		return Iterator(head);
	}*/

	Iterator end() const; /*{
		return Iterator(tail);
	}*/

};