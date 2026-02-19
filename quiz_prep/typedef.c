#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;


int main(){

    Node *a = (Node*)(malloc(sizeof(Node)));
    Node *b = (Node*)(malloc(sizeof(Node)));
    Node *c = (Node*)(malloc(sizeof(Node)));

    Node *head = a;

    a->value = 10;
    b->value = 15;
    c->value = 20;

    a->next = b;
    b->next = c;
    c->next = NULL;

    Node *cur = head;

    while (cur != NULL)
    {
        printf("%d\n", cur->value);
        cur = cur->next;
    }

    free(a);
    free(b);
    free(c);
    


    return 0;
}