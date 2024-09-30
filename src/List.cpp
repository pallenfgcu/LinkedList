// List.cpp
// Developer: <<Student's Name>>
// FGCU Computing and Software Engineering
// Implementation of a dynamic linked list class
// --------------------------------------------------------------------------------

#include "List.h"


// initialize empty list
/**
 * Initialize an empty list
 */
List::List() : head(nullptr), size(0) {

} // default constructor

/**
 * Initialize list with first element value
 * @param value - first value added to list
 */
List::List(int value) : head(nullptr), size(0) {

} // property constructor

/**
 *  Remove all elements from list
 */
List::~List() {

} // destructor


/**
 * @return read-only size of list
 */
int List::getSize() {
    return size;
} // getSize

/**
 * add an item at a specified position to the list
 * @param value - item to add
 * @param position - list position (0-indexed; default value -1 to add to end of list)
 */
void List::insert(int value, int position) {

} // insert

/**
 * Remove the item from specified position in the list
 * @param position - position of the item in the list (0-indexed)
 * @return - item value found at position or -1 if position is not valid
 */
int List::remove(int position) {
    int item = -1;

    return item;
} // remove

/**
 * Find and return the item value at specified position in the list
 * @param position - position of the item in the list (0-indexed)
 * @return - item value found at position or -1 if position is not valid
 */
int List::read(int position) {
    int item = -1;

    return item;
} // read

/**
 * Change the value of the item at the specified position in the list
 * @param value - new value to assign to existing item in the list
 * @param position - position of existing item (0-indexed)
  */
void List::modify(int value, int position) {

} // modify
