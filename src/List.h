// List.h
// Developer: <<Student's Name>>
// FGCU Computing and Software Engineering
// A dynamic linked list class declaration that implements
// <<add details about this implementation, i.e. integer values, single or double
// linked list, actions, etc.>>
// --------------------------------------------------------------------------------

#ifndef LINKEDLIST_LIST_H
#define LINKEDLIST_LIST_H


class List {
private:
    struct Node {
        int value;
        Node* next;
    };

    Node* head;     // points to first node of the list
    int   size;     // current number of nodes in list (0 == empty)
public:

    List();         // initialize empty list
    List(int value);// initialize list with first element value

    ~List();        // remove all elements from list

    int getSize();  // read-only size property of list

    void insert(int value, int position=-1);
    int  remove(int position);
    int  read(int position);
    void modify(int value, int position);
};


#endif //LINKEDLIST_LIST_H
