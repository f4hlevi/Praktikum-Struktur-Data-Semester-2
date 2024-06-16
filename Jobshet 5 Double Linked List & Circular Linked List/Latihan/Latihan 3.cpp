//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; 
    struct Node *prev; 
};

void insertEnd(struct Node** start, int value)
{
    if (*start == NULL)
    {
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        new_node->data = value;
        new_node->next = new_node->prev = new_node;
        *start = new_node; 
        return;
    }

    struct Node *last = (*start)->prev;
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = *start;
    (*start)->prev = new_node;
    new_node->prev = last;
    last->next = new_node;
}

void display(struct Node* start)
{
    struct Node *temp = start;
    printf("\nTraversal in forward direction \n");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != start);
    
    printf("\nTraversal in reverse direction \n");
    struct Node *last = start->prev;
    temp = last;
    do
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    } while (temp != last);
}

int main()
{
    struct Node* start = NULL;

    insertEnd(&start, 5);
    insertEnd(&start, 8);
    insertEnd(&start, 9);
    insertEnd(&start, 3);

    printf("Created circular doubly linked list is: ");
    display(start);
    
    return 0;
}

