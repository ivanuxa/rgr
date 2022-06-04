#ifndef NODE_H_
#define NODE_H_

#include "Flight.h"

typedef struct node {
    Flight flight;
    struct node* prev;
    struct node* next;
} Node;

Node* listCreate();
Node* listAdd(Node** first, char* departurePoint, char* destinationPoint, TIME time[2]);
Node* listGet(Node* first, ID id);
void  listShowAll(Node* first);
int   listRemove(Node* first, ID id);
Node* listChangeDeparturePoint(Node* first, ID id, char* departurePoint);
Node* listChangeDestinationPoint(Node* first, ID id, char* destinationPoint);
Node* listChangeTime(Node* first, ID id, TIME time[2]);
Node* listChangeDeparturePointAndDestinationPoint(Node* first, ID id, char* departurePoint, char* destinationPoint);
Node* listChangeDeparturePointAndTime(Node* first, ID id, char* departurePoint, TIME time[2]);
Node* listChangeDestinationPointAndTime(Node* first, ID id, char* destinationPoint, TIME time[2]);
Node* listChangeDeparturePointAndDestinationPointAndTime(Node* first, ID id, char* departurePoint, char* destinationPoint, TIME time[2]);


#endif // NODE_H_