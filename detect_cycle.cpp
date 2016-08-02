#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node* next;
};

bool has_cycle(struct Node *head)
{
    if ( head == NULL )
        return 0;

    struct Node* seen[100];
    int num_nodes = 0;

    seen[num_nodes++] = head;

    while (head->next != NULL) {
        head = head->next;
        printf("ADD in Hex %p\n", head);
        for ( int i = 0; i < num_nodes; i++) {
            if ( head == seen[i] ) {
                return 1;
            }
        }
        seen[num_nodes++] = head;
    }

    return 0;
}

void add_node(struct Node *head)
{
    while (head->next != NULL) {
        head = head->next;
    }
    struct Node *new_node = (struct Node*) calloc(1, sizeof(struct Node));
    head->next = new_node;
}

int main()
{
    struct Node* head = (struct Node*) calloc(1, sizeof(struct Node));
    printf("%d\n", has_cycle(head));
    add_node(head);
    //add_node(head);
    printf("%d\n", has_cycle(head));

    struct Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->next = head;
    printf("%d\n", has_cycle(head));
    

    //printf("Address of pointer %d\n", node1_address); 
}
