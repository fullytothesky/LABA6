#include"Header1.h"
#include <iostream>
using namespace std;

template<typename T>
void CirculatedList<T>::insertAtIndex() {
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


}



template<typename T>
void CirculatedList<T>::findelement() {
	T value;
	cout << "Enter element value that you want to find:" << endl;
	cin >> value;
	int counter = 1;
	Node<T>* iter = head;

	bool elementFound = false;   // «м≥нна, €ка вказуЇ, чи було знайдено елемент

	do {
		if (iter->data == value) {
			cout << "Found an element: " << iter->data << " with index: " << counter << " in that list" << endl;

			elementFound = true;
		}
		iter = iter->next;
		counter++;
	} while (iter != head);

	if (!elementFound) {
		cout << "There is no such an element" << endl;
	}

}



template<typename T>
void CirculatedList<T>::setsize() {
	cout << "enter size :" << endl;
	cin >> maxsize;
}


template<typename T>
void CirculatedList<T>::pushback()
{
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
}









template<typename T>
Node<T>::Node(T data, Node* next) {
	this->data = data;
	this->next = next;
}

template<typename T>
void CirculatedList<T>::getSize() {
	cout << "size of list: " << size << endl;
}


template<typename T>
CirculatedList<T>::CirculatedList() {
	maxsize = 0;
	size = 0;
	head = nullptr;
	tail = nullptr;
}

template<typename T>
CirculatedList<T>::~CirculatedList() {
	if (head != nullptr) {
		Node<T>* current = head->next;


		while (current != head) {
			Node<T>* temp = current;
			current = current->next;
			delete temp;
		}


		delete head;
		head = nullptr;
	}
}




template<typename T>
T& CirculatedList<T>::Iterator::getCurrentValue() const {
	return current->data;
}


template<typename T>
T& CirculatedList<T>::Iterator::getNextValue(Iterator& it) {
	++it;
	return *it;
}

template<typename T>
typename CirculatedList<T>::Iterator CirculatedList<T>::begin() const {
	return Iterator(head);
}

template<typename T>
typename CirculatedList<T>::Iterator CirculatedList<T>::end() const {
	return Iterator(tail);
}


template<typename T>
T& CirculatedList<T>::Iterator:: operator*() const {
	return current->data;
}
template<typename T>
typename CirculatedList<T>::Iterator& CirculatedList<T>::Iterator::operator++() {
	current = current->next;
	return *this;
}

template class CirculatedList<int>;
template class CirculatedList<float>;
template class CirculatedList<string>;