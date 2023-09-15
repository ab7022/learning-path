#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}

void displayList(struct Node* head) {
    struct Node* current = head;
    if (current == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("List: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }

    displayList(*head);
}

void deleteNode(struct Node** head, int data) {
    if (*head == NULL) {
        printf("The list is empty. No nodes to delete.\n");
        return;
    }

    struct Node* current = *head;
    struct Node* prev = NULL;

    // Check if the first node needs to be deleted
    if (current->data == data) {
        *head = current->next;
        free(current);
        displayList(*head);
        return;
    }

    // Find the node to be deleted
    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    // Node not found in the list
    if (current == NULL) {
        printf("Node with value %d not found in the list.\n", data);
        return;
    }

    // Node found and needs to be deleted
    prev->next = current->next;
    free(current);
    displayList(*head);
}

int main() {
    struct Node* head = NULL;
    int choice, data;

    while (1) {
        printf("1. Insert node\n");
        printf("2. Delete node\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data to insert: ");
                scanf("%d", &data);
                insertNode(&head, data);
                break;
            case 2:
                printf("Enter the data to delete: ");
                scanf("%d", &data);
                deleteNode(&head, data);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
