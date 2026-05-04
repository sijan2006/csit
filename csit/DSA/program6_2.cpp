#include <stdio.h>
#include <stdlib.h>

typedef struct NodeType
{
    int data;
    struct NodeType *next;
} Node;

Node *front = NULL;
Node *rear = NULL;

Node *create_node(int data)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    if (temp == NULL)
    {
        printf("Malloc Error.");
        exit(1);
    }
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int count()
{
    int i = 0;
    Node *t = front;
    while (t != NULL)
    {
        i++;
        t = t->next;
    }
    return i;
}

void enqueue()
{
    int d;
    printf("Enter data to enqueue:\t");
    scanf("%d", &d);
    Node *t = create_node(d);

    if (rear == NULL)
    {
        front = t;
        rear = t;
    }
    else
    {
        rear->next = t;
        rear = t;
    }

    printf("%d enqueued to queue.\n", d);
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue Underflow.\n");
        return;
    }
    Node *temp = front;
    printf("%d dequeued from queue.\n", temp->data);
    front = front->next;
    if (front == NULL)
        rear = NULL;
    free(temp);
}

void peek()
{
    if (front == NULL)
    {
        printf("Queue is Empty.\n");
        return;
    }
    printf("Front element: %d\n", front->data);
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is Empty.\n");
        return;
    }
    Node *t = front;
    printf("Queue (Front -> Rear): ");
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

void search()
{
    int n;
    printf("Enter element to search:\t");
    scanf("%d", &n);

    Node *t = front;
    int i = 0;

    while (t != NULL)
    {
        if (t->data == n)
        {
            printf("%d Found at index %d\n", n, i);
            return;
        }
        t = t->next;
        i++;
    }

    printf("%d not found in the queue.\n", n);
}

int main()
{
    int opt;

    while (1)
    {
        printf("\nEnter Option:[1] Enqueue:[2] Dequeue:[3] Peek:[4] Display:[5] Count:[6] Search:[7] Exit:\n-> ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("%d\n", count());
            break;

        case 6:
            search();
            break;

        case 7:
            return 0;

        default:
            printf("Invalid Option\n");
        }
    }
}