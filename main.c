#include "LinkedList.h"

int main(void) {

    // Create linked list
    Node* head = NULL;
    // Add node with for and with random number between 0 and 20
    for (int i = 0; i < 4; i++) {
        head = AddNode(head, rand()%20);
    }

    // List all node
    DisplayNode(head);

    // Function to reverse
    head = ReverseLinkedList(head);

    // Print all node
    DisplayNode(head);
    return EXIT_SUCCESS;
}