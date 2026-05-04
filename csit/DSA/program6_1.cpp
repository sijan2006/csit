#include <stdio.h>
#include <stdlib.h>

typedef struct NodeType
{
    int data;
    struct NodeType *next;
} Node;

Node *head = NULL;

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
    Node *t = head;
    while (t != NULL)
    {
        i++;
        t = t->next;
    }
    return i;
}

void push()
{
    int d;
    printf("Enter data to push:\t");
    scanf("%d", &d);
    Node *t = create_node(d);

    t->next = head;
    head = t;

    printf("%d pushed to stack.\n", d);
}

void pop()
{
    if (head == NULL)
    {
        printf("Stack Underflow.\n");
        return;
    }
    Node *temp = head;
    printf("%d popped from stack.\n", temp->data);
    head = head->next;
    free(temp);
}

void peek()
{
    if (head == NULL)
    {
        printf("Stack is Empty.\n");
        return;
    }
    printf("Top element: %d\n", head->data);
}

void display()
{
    if (head == NULL)
    {
        printf("Stack is Empty.\n");
        return;
    }
    Node *t = head;
    printf("Stack (Top -> Bottom): ");
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

    Node *t = head;
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

    printf("%d not found in the stack.\n", n);
}

int main()
{
    int opt;

    while (1)
    {
        printf("\nEnter Option:[1] Push:[2] Pop:[3] Peek:[4] Display:[5] Count:[6] Search:[7] Exit:\n-> ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
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