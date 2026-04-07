#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *createList(struct node *head);
struct node *displayList(struct node *head);
struct node *addAtBeginning(struct node *head);
struct node *addAtEnd(struct node *head);
struct node *addBeforeNode(struct node *head);
struct node *addAfterNode(struct node *head);
struct node *deleteFromBeginning(struct node *head);
struct node *deleteFromEnd(struct node *head);
struct node *deleteGivenNode(struct node *head);
struct node *deleteAfterNode(struct node *head);
struct node *deleteEntireList(struct node *head);
struct node *sortList(struct node *head);
struct node *reverseList(struct node *head);
struct node *findCycle(struct node *head);
struct node *findMiddle(struct node *head);

// 1. Create List

struct node *createList(struct node *head) {
    struct node *newnode, *temp = NULL;
    int n, i;
    if (head != NULL) {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;
    }
    printf("Enter number of nodes to add: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (!newnode) { printf("Memory allocation failed.\n"); return head; }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == NULL) {
            head = temp = newnode;     
        } else {
            temp->next   = newnode;
            newnode->prev = temp;
            temp         = newnode;
        }
    }
    return head;
}

//2.Display List
struct node *displayList(struct node *head) {
    struct node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return head;
    }
    printf("HEAD <-> ");
    while (temp != NULL) {
        printf("[%d]", temp->data);
        if (temp->next != NULL) printf(" <-> ");
        temp = temp->next;
    }
    printf(" <-> NULL\n");
    return head;
}

//3. Add at Beginning

struct node *addAtBeginning(struct node *head) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (!newnode) { printf("Memory allocation failed.\n"); return head; }

    printf("Enter data to insert at beginning: ");
    scanf("%d", &newnode->data);

    newnode->prev = NULL;
    newnode->next = head;
    if (head != NULL) head->prev = newnode;

    return newnode;         
}

// 4. Add at End

struct node *addAtEnd(struct node *head) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (!newnode) { printf("Memory allocation failed.\n"); return head; }

    printf("Enter data to insert at end: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL) {
        newnode->prev = NULL;
        return newnode;
    }
    temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next    = newnode;
    newnode->prev = temp;

    return head;
}

//5. Add Before a Given Node

struct node *addBeforeNode(struct node *head) {
    struct node *newnode, *temp;
    int pos_data;

    if (head == NULL) { printf("List is empty.\n"); return head; }

    printf("Enter data of the node before which you want to insert: ");
    scanf("%d", &pos_data);

    temp = head;
    while (temp != NULL && temp->data != pos_data)
        temp = temp->next;

    if (temp == NULL) {
        printf("Node with data %d not found.\n", pos_data);
        return head;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    if (!newnode) { printf("Memory allocation failed.\n"); return head; }

    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);

    newnode->prev = temp->prev;
    newnode->next = temp;

    if (temp == head) {
        head = newnode;          
    } else {
        temp->prev->next = newnode;
    }
    temp->prev = newnode;

    return head;
}

//6. Add After a Given Node

struct node *addAfterNode(struct node *head) {
    struct node *newnode, *temp;
    int pos_data;

    if (head == NULL) { printf("List is empty.\n"); return head; }

    printf("Enter data of the node after which you want to insert: ");
    scanf("%d", &pos_data);

    temp = head;
    while (temp != NULL && temp->data != pos_data)
        temp = temp->next;

    if (temp == NULL) {
        printf("Node with data %d not found.\n", pos_data);
        return head;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    if (!newnode) { printf("Memory allocation failed.\n"); return head; }

    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);

    newnode->prev = temp;
    newnode->next = temp->next;

    if (temp->next != NULL) temp->next->prev = newnode;
    temp->next = newnode;

    return head;
}

//7. Delete from Beginning

struct node *deleteFromBeginning(struct node *head) {
    struct node *temp;
    if (head == NULL) { printf("List is already empty.\n"); return NULL; }

    temp = head;
    head = head->next;
    if (head != NULL) head->prev = NULL;

    printf("Deleted: %d\n", temp->data);
    free(temp);
    return head;
}

//8. Delete from End 

struct node *deleteFromEnd(struct node *head) {
    struct node *temp;
    if (head == NULL) { printf("List is already empty.\n"); return NULL; }

    temp = head;
    if (temp->next == NULL) {  
        printf("Deleted: %d\n", temp->data);
        free(temp);
        return NULL;
    }

    while (temp->next != NULL) temp = temp->next;
    printf("Deleted: %d\n", temp->data);
    temp->prev->next = NULL;
    free(temp);
    return head;
}

//9. Delete a Given Node

struct node *deleteGivenNode(struct node *head) {
    struct node *temp;
    int key;

    if (head == NULL) { printf("List is empty.\n"); return NULL; }

    printf("Enter data of the node to delete: ");
    scanf("%d", &key);

    temp = head;
    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL) {
        printf("Node with data %d not found.\n", key);
        return head;
    }

    if (temp == head) {
        head = temp->next;
        if (head != NULL) head->prev = NULL;
    } else {
        temp->prev->next = temp->next;
        if (temp->next != NULL) temp->next->prev = temp->prev;
    }
    printf("Deleted: %d\n", temp->data);
    free(temp);
    return head;
}

// 10. Delete Node After a Given Node

struct node *deleteAfterNode(struct node *head) {
    struct node *temp, *delnode;
    int key;

    if (head == NULL) { printf("List is empty.\n"); return NULL; }

    printf("Enter data of the node whose NEXT node you want to delete: ");
    scanf("%d", &key);

    temp = head;
    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) {
        printf("No node exists after the given node.\n");
        return head;
    }

    delnode    = temp->next;
    temp->next = delnode->next;
    if (delnode->next != NULL) delnode->next->prev = temp;

    printf("Deleted: %d\n", delnode->data);
    free(delnode);
    return head;
}

//11. Delete Entire List

struct node *deleteEntireList(struct node *head) {
    struct node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("Entire list deleted.\n");
    return NULL;
}

//12. Sort List (Bubble Sort on data)

struct node *sortList(struct node *head) {
    struct node *current, *index;
    int temp_data;

    if (head == NULL) { printf("List is empty.\n"); return NULL; }

    for (current = head; current->next != NULL; current = current->next) {
        for (index = current->next; index != NULL; index = index->next) {
            if (current->data > index->data) {
                temp_data     = current->data;
                current->data = index->data;
                index->data   = temp_data;
            }
        }
    }
    printf("List sorted in ascending order.\n");
    return head;
}

//13. Reverse List

struct node *reverseList(struct node *head) {
    struct node *current = head, *nextnode;
    struct node *new_head = NULL;

    while (current != NULL) {
        nextnode      = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        current       = nextnode;
    }
    printf("List reversed.\n");
    return new_head;
}

//14. Find Cycle (Floyd's Algorithm)

struct node *findCycle(struct node *head) {
    struct node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            printf("Cycle detected in the list.\n");
            return head;
        }
    }
    printf("No cycle found in the list.\n");
    return head;
}

// 15. Find Middle Element (Slow-Fast Pointers)

struct node *findMiddle(struct node *head) {
    struct node *slow, *fast;

    if (head == NULL) { printf("List is empty.\n"); return head; }

    slow = fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    printf("Middle element: %d\n", slow->data);
    return head;
}

//Main (Menu Driver)

int main() {
    struct node *head = NULL;
    int choice;

    while (1) {
        printf("\n========== DOUBLY LINKED LIST MENU ==========\n");
        printf(" 1.  Create / Append nodes\n");
        printf(" 2.  Display list\n");
        printf(" 3.  Add at beginning\n");
        printf(" 4.  Add at end\n");
        printf(" 5.  Add before a given node\n");
        printf(" 6.  Add after a given node\n");
        printf(" 7.  Delete from beginning\n");
        printf(" 8.  Delete from end\n");
        printf(" 9.  Delete a given node\n");
        printf("10.  Delete node after a given node\n");
        printf("11.  Delete entire list\n");
        printf("12.  Sort list\n");
        printf("13.  Reverse list\n");
        printf("14.  Find cycle\n");
        printf("15.  Find middle element\n");
        printf(" 0.  Exit\n");
        printf("=============================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case  1: head = createList(head);          break;
            case  2: head = displayList(head);            break;
            case  3: head = addAtBeginning(head);      break;
            case  4: head = addAtEnd(head);            break;
            case  5: head = addBeforeNode(head);       break;
            case  6: head = addAfterNode(head);        break;
            case  7: head = deleteFromBeginning(head); break;
            case  8: head = deleteFromEnd(head);       break;
            case  9: head = deleteGivenNode(head);     break;
            case 10: head = deleteAfterNode(head);     break;
            case 11: head = deleteEntireList(head);    break;
            case 12: head = sortList(head);            break;
            case 13: head = reverseList(head);         break;
            case 14: head = findCycle(head);              break;
            case 15: head = findMiddle(head);             break;
            case  0:
                head = deleteEntireList(head);
                printf("Exiting. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Enter 0-15.\n");
        }
    }
    return 0;
}