
#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node *next;
} Header = {0, NULL};

void newNode(int value);
void printNodes();
void endProg();

int main() {
    struct node *front, *back;
    struct node current;
    struct node previous;

    printf("%d",Header.data);

    endProg();
}

void newNode(int value) {
    struct node * newNode = NULL;

    newNode = malloc(sizeof(struct node));

    newNode -> data = value;

    newNode -> next = NULL;
    // Adding a new node to the list
}

void printNodes() {
    struct node * current = Header.next;

    while (* current != NULL) {
        printf("%d", & current.data);
        * current = * current.next;
    }
    printf("Printing Nodes.");
}

void endProg() {
    printNodes();
}
