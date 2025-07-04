
#include <stdio.h>  
#include <stdlib.h> 

struct Node {
    int value;
    struct Node *next;
};

struct Node* create_node(int number) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    if (new_node == NULL) {
        printf("Error: Could not allocate memory.\n");
        return NULL;
    }

    new_node->value = number;
    new_node->next = NULL;

    return new_node;
}

void add_node_end(struct Node **head, int number) {
    struct Node* new_node = create_node(number);

    if (*head == NULL) {
        *head = new_node;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void print_list(struct Node *head) {
    struct Node* current = head;

    printf("Linked List: ");

    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }

    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;  

    add_node_end(&head, 5);
    add_node_end(&head, 10);
    add_node_end(&head, 15);

    print_list(head);

    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
