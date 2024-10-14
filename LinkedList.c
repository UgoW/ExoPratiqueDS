//
// Created by Ugo WAREMBOURG on 14/10/2024.
//

#include "LinkedList.h"

void DisplayNode(Node* n) {
    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }

    printf("\n");

}

Node* AddNode(Node* head, int data) {

    Node* nNode = (Node*)malloc(sizeof(Node));
    nNode->data = data;
    nNode->next = NULL;

    if (head == NULL) {
        return nNode;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = nNode; // Linked the last node to new
    return head;
}

// More info LinkedList.h
Node* ReverseLinkedList(Node* head) {
    Node* previous = NULL;
    Node* curren = head;


    while (curren != NULL) {
        Node* next = curren->next;
        curren->next = previous;
        previous = curren;
        curren = next;
    }

    return previous;

}