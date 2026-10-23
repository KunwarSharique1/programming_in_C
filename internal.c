#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
    printf("Inserted %d at the beginning.\n", val);
}

void insertAtEnd(struct Node** head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = val;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        printf("Inserted %d as the first node.\n", val);
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Inserted %d at the end.\n", val);
}

void insertAtPosition(struct Node** head, int val, int pos) {
    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }

    if (pos == 1) {
        insertAtBeginning(head, val);
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds!\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = val;
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d at position %d.\n", val, pos);
}

void deleteFromBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is already empty!\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted %d from the beginning.\n", temp->data);
    free(temp);
}

void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is already empty!\n");
        return;
    }

    struct Node* temp = *head;

    if (temp->next == NULL) {
        *head = NULL;
        printf("Deleted %d (the last remaining node).\n", temp->data);
        free(temp);
        return;
    }

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    struct Node* lastNode = temp->next;
    temp->next = NULL;
    printf("Deleted %d from the end.\n", lastNode->data);
    free(lastNode);
}

void deleteFromPosition(struct Node** head, int pos) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }

    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }

    if (pos == 1) {
        deleteFromBeginning(head);
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position out of bounds!\n");
        return;
    }

    struct Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    printf("Deleted %d from position %d.\n", nodeToDelete->data, pos);
    free(nodeToDelete);
}

void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List status: [ EMPTY ]\n");
        return;
    }

    struct Node* temp = head;
    printf("Current List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, value, position;

    while (1) {
        printf("\n--- Singly Linked List Operations ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Delete from Beginning\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Position\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtBeginning(&head, value);
            displayList(head);
        } else if (choice == 2) {
            printf("Enter value to insert: ");
            scanf("%d", &value);
            insertAtEnd(&head, value);
            displayList(head);
        } else if (choice == 3) {
            printf("Enter value to insert: ");
            scanf("%d", &value);
            printf("Enter position (1-indexed): ");
            scanf("%d", &position);
            insertAtPosition(&head, value, position);
            displayList(head);
        } else if (choice == 4) {
            deleteFromBeginning(&head);
            displayList(head);
        } else if (choice == 5) {
            deleteFromEnd(&head);
            displayList(head);
        } else if (choice == 6) {
            printf("Enter position to delete (1-indexed): ");
            scanf("%d", &position);
            deleteFromPosition(&head, position);
            displayList(head);
        } else if (choice == 7) {
            displayList(head);
        } else if (choice == 8) {
            printf("Exiting program.\n");
            exit(0);
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
