//
// Created by Ugo WAREMBOURG on 14/10/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <ranlib.h>

#ifndef DS_LINKEDLIST_H
#define DS_LINKEDLIST_H

typedef struct{
    int data;
    struct Node* next;
} Node;

void DisplayNode(Node* n);

Node* AddNode(Node* head, int data);

// On sauvegarde le noeud suivant, on fait pointer le noeud actuel vers le celui d'avant enfin, on avance dans la liste
Node* ReverseLinkedList(Node* head);

#endif
