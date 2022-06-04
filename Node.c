#include "Node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node* listCreate() {
    return NULL;
}

Node* listAdd(Node** first, char* departurePoint, char* destinationPoint, TIME time[2]) {

    static ID id = 0;
    Node* temp = malloc(sizeof(Node));
    temp->flight.id = id++;
    temp->flight.time[0] = time[0];
    temp->flight.time[1] = time[1];
    strcpy(temp->flight.departurePoint, departurePoint);
    strcpy(temp->flight.destinationPoint, destinationPoint);

    if (*first == NULL) {
        *first = malloc(sizeof(Node));
        temp->next = NULL;
        temp->prev = NULL;
        *first = temp;
        return temp;
    }

    Node* curr = *first;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = temp;
    temp->prev = curr;
    temp->next = NULL;
    return temp;
}

Node* listGet(Node* first, ID id) {
    if (first == NULL) {
        return NULL;
    }

    Node* curr = first;
    while (curr != NULL) {
        if (curr->flight.id == id) {
            return curr;
        }
        curr = curr->next;
    }

    return NULL;
}

void listShowAll(Node* first) {
    if (first == NULL) {
        printf("Database is empty\n");
        return;
    }

    Node* curr = first;
    while (curr != NULL) {
        printf("ID: %u; Departure Point: %s; Destination Point: %s; Time: %u:%u\n", curr->flight.id, curr->flight.departurePoint, curr->flight.destinationPoint, curr->flight.time[0], curr->flight.time[1]);
        curr = curr->next;
    }
}

int intListRemove(Node* first, ID id) {
    if (first == NULL) {
        return 0;
    }
}