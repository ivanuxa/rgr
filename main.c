#include <stdio.h>
#include "Node.h"


int main(void) {
    Node* root = listCreate();
    TIME time1[2] = {12, 0};
    TIME time2[2] = {13, 0};
    Node* node1 = listAdd(&root, "A", "B", time1);
    Node* node2 = listAdd(&root, "A", "C", time2);

    listShowAll(root);

    return 0;
}