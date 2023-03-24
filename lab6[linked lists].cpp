#include <iostream>
using namespace std;

template < class T>
class Node {
private:
	T info;
	Node<T>* next, * back;
public:
	Node() {
		next = NULL;
		back = NULL;
	}
	//getters
	T get_info() {
		return info;
	}
		Node<T>* get_next() {
		return next;
	}
	Node<T>* get_back() {
		return back;
	}

	//setters
	void set_info(T temp) {
		info = temp;
	}
	void set_next(Node<T>* n) {
		next = n;
	}
	void set_back(Node<T>* b) {
		back = b;
	}

	~Node() {

	}
};

//class for the linked list
template <class T>
class my_list {
private:
	Node<T>* first, * last;

public:
	my_list() {
		first = NULL;
		last = NULL;
	}
	//append method
	Node<T>* append(T t_info) {
		Node<T> temp;
		temp.set_info(t_info);
		if (first == NULL) {
			//first node in the list
			first = &temp;
			last = first;
		}
		else {
			//not first
			/*
			1.the new temp will become last
			2. temp.next = NULL
			3. temp.back = old last
			4. old last.next = temp
			*/
			temp.set_back(last);
			last->set_next(*temp);
			last = &temp;
		}
		return &temp;
	}
	//write a method insert_after(curr pointer, info). inserts a new
	//node to the list after the curr node

	Node<T>* insert_after(Node<T>* curr, T info)
	{
		Node<T> temp;
		temp.set_info(info);
		temp.set_next(curr->get_next());
		(curr->get_next())->set_back(&temp);
		curr->set_next(&temp);
		temp.set_back(curr);
		return &temp;
	}

	~my_list() {

	}
};
int main()
{
	return 0;
}



