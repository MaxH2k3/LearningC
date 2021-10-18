#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * student;
    float score;
    struct Node* next;
} Node;

typedef struct {
    float max;
    float min;
} MinMax;



//print on screen
void display(Node * head){
    printf("-----------------------\n");
    printf("after remove index\n");
    int index = 0;
    Node * itemOfLinkedList = head;
    while (itemOfLinkedList != NULL)
    {
        printf("Grade of %d is: %f\n", index,itemOfLinkedList->score);
        printf("Next of %d is: %p\n", index, itemOfLinkedList->next);

        itemOfLinkedList = itemOfLinkedList->next;
        index++;
    }
    printf("Size (lenght) of linked list = %d\n", index);
}

MinMax Min_Max(Node * head) {
    Node * MaxOfLinkedList = head;
    Node * MinOfLinkedList = head;
    Node * itemOfLinkedList = head;
    MinMax minMax;

    //find max/min in list
    Node * NextOfLinkedList = MaxOfLinkedList->next;
    while (NextOfLinkedList != NULL) {
    if (MaxOfLinkedList->score < NextOfLinkedList->score) 
    {
        MaxOfLinkedList = NextOfLinkedList;
    }
    else if (MinOfLinkedList->score > NextOfLinkedList->score) {
        MinOfLinkedList = NextOfLinkedList;
    }

    NextOfLinkedList = NextOfLinkedList->next;
    }

    
    printf("Max of list is: %f\n", MaxOfLinkedList->score);
    printf("Min of list is: %f\n", MinOfLinkedList->score);

    minMax.max = MaxOfLinkedList->score;
    minMax.min = MinOfLinkedList->score;

    return minMax;
    
}

void remove_max(Node * head, float MaxOfLinkedList) {
    int index = 0;
    Node * itemOfLinkedList = head;
    printf("------------------------------\n");
    printf("after remove max in list\n");
    while (itemOfLinkedList != NULL)
    {
        index++;
        if (itemOfLinkedList->score == MaxOfLinkedList) {
            itemOfLinkedList = itemOfLinkedList->next;
        }
        
        printf("Grade of %d is: %f\n", index, itemOfLinkedList->score);
        printf("Next of %d is: %p\n", index, itemOfLinkedList->next);
        itemOfLinkedList = itemOfLinkedList->next;
    }
    printf("size of list after remove is: %d\n", index);
}

void remove_min(Node * head, float MinOfLinkedList) {
    int index = 0;
    Node * itemOfLinkedList = head;
    printf("------------------------------\n");
    printf("after remove min in list\n");
    while (itemOfLinkedList != NULL)
    {
        index++;
        if (itemOfLinkedList->score == MinOfLinkedList)
        {
            itemOfLinkedList = itemOfLinkedList->next;
        }
        
        printf("Grade of %d is: %f\n", index,itemOfLinkedList->score);
        printf("Next of %d is: %p\n", index, itemOfLinkedList->next);
        itemOfLinkedList = itemOfLinkedList->next;
    }
    printf("size of list after remove is: %d\n", index);
}

Node * create_linked_list() {
    Node * node1 = (Node *)malloc(sizeof(Node));
    node1->score = 1.4;
    node1->next = NULL;

    //head-> NULL

    Node * node2 = (Node *)malloc(sizeof(Node));
    node2->score = 4.5;
    node2->next = NULL;
    node1->next = node2;

    //head-> node2-> NULL

    Node * node3 = (Node *)malloc(sizeof(Node));
    node3->score = 9.0;
    node3->next = NULL;
    node2->next = node3;

    //head-> node2 -> node3 -> NULL

    Node * node4 = (Node *)malloc(sizeof(Node));
    node4->score = 8.4;
    node4->next = NULL;
    node3->next = node4;

    //head-> node2 -> node3 -> node4 -> NULL

    return node1;
}

Node * remove_item_by_index(Node * head, int input_index) {
    int index = 0;
    Node * itemOfLinkedList = head;
    if (itemOfLinkedList == NULL) {
        printf("error input");
    }
    else {
        while (itemOfLinkedList != NULL) {
            if (input_index == index + 1) {
                Node * remove_item = itemOfLinkedList->next;
                itemOfLinkedList->next = remove_item->next;
                break; 
            }
            index++;
            itemOfLinkedList = itemOfLinkedList->next;
        }
    }
    return head;
}

void main() {
    
    Node * head = create_linked_list();


    //find min/max in list
    
    MinMax minMax = Min_Max(head);;
    float max = minMax.max;
    float min = minMax.min;


    //remove max in list
    remove_max(head, max);

    //remove min in list
    remove_min(head, min);

    //remove
    head = remove_item_by_index(head, 1);

    //print
    display(head);


    return 0;
}



