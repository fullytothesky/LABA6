#pragma once
#include<iostream>
using namespace std;
template <typename T>
class Node {


public:
	Node<T>* next;
	T data;
	Node(T data = T(), Node* next = nullptr);
};

template <typename T>
class CirculatedList {

private:



	int maxsize;
	int size;
	Node<T>* head;
	Node<T>* tail;
public:

	CirculatedList(); 
	~CirculatedList();
	void setsize(); 
	void pushback();


	
	
	void getSize();
	





	void findelement();
	


	void insertAtIndex();


	class Iterator {
	public:
		Iterator(Node<T>* start) : current(start) {}

		T& operator*() const;
		Iterator& operator++();
		T& getCurrentValue() const;
		
		T& getNextValue(Iterator& it);

	private:
		Node<T>* current;
	};

	Iterator begin() const;

	Iterator end() const; 
};
