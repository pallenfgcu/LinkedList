// linked_list.cpp
// Developer: Prof. Allen
// FGCU Computing and Software Engineering
// Main test harness for a dynamic linked list class implementation
// --------------------------------------------------------------------------------
#include <iostream>     // console I/O
#include <cstdlib>      // random number generation
#include <ctime>        // seed random numbers
#include <string>       // for debug messages

#include "src/List.h"   // linked list implementation

// Type definitions
// --------------------------------------------------------------------------------
enum ListPosition {
    Append = -1,
    Front,
    Middle,
    End,
    Count
};

// function declarations (proto-types)
// --------------------------------------------------------------------------------
void printList(List list);

// function definitions
// --------------------------------------------------------------------------------
int main() {

    // initialize random numbers using current system time as a seed value
    std::srand(time(NULL));

    List theList;   // declare and empty list

    std::cout << "Empty list.." << std::endl;
    printList(theList); // test printing the empty list

    // reinitialize list with one random number between 0 and 99
    int value = std::rand() % 100;
    theList = List(value);

    std::cout << "Single value list.." << std::endl;
    printList(theList); // test printing the single value list

    std::cout << "Add 10 value to the list.." << std::endl;
    // add 10 random numbers
    for (int item=0; item < 10; ++item) {

        int position = std::rand() % (ListPosition::Count + 1) - 1;

        value = std::rand() % 100;  // random value 0 - 99

        std::string positionMsg;

        switch (position) {
            case Append:
                positionMsg = "Appended ";
                theList.insert(value);
                break;
            case Front:
                positionMsg = "Added to Front ";
                theList.insert(value, 0);
                break;
            case Middle:
                if (theList.getSize() > 0)
                    position = std::rand() % theList.getSize();
                else
                    position = 0;
                positionMsg = "Added at position " + std::to_string(position) + " ";
                theList.insert(value, position);
                break;
            case End:
                positionMsg = "Added to End ";
                theList.insert(value, theList.getSize());
        }

        std::cout << positionMsg << "value " << value << std::endl;

        printList(theList);

    } // insert 10 items


    std::cout << "Read 5 values from the list.." << std::endl;
    // read 5 random values from the list
    for (int item = 0; item < 5; ++item) {
        int position{0};
        if (theList.getSize() > 0)
            position = std::rand() % theList.getSize();

        int value = theList.read(position);

        std::cout << "Read " << value << " at position " << position << std::endl;
    } // read 5 items

    std::cout << "Modify 5 values in the list.." << std::endl;
    // modify 5 random values in the list
    for (int item = 0; item < 5; ++item) {
        int position{0};
        if (theList.getSize() > 0)
            position = std::rand() % theList.getSize();

        int value = std::rand() % 99; // random value 0 - 99

        theList.modify(value, position);

        std::cout << "Modified position " << position << " with value " << value <<  std::endl;

        printList(theList);

    } // modify 5 items


    std::cout << "Remove 5 values from the list.." << std::endl;
    // remove 5 random values from the list
    for (int item = 0; item < 5; ++item) {
        int position{0};
        if (theList.getSize() > 0)
            position = std::rand() % theList.getSize();

        int value = theList.remove(position);

        std::cout << "Removed " << value << " from position " << position << std::endl;
        printList(theList);

    } // remove 5 items


    return 0;   // success
} // main


/**
 * Utility method to print the current list to the console
 * @param list - populated list of values
 */
void printList(List list) {
    std::cout << "List{";

    for (int item = 0; item < list.getSize(); ++item) {
        std::cout << list.read(item);
        if (item < list.getSize())
            std::cout << ",";
    }

    std::cout << "}" << std::endl;
} // printList