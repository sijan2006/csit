#include <stdio.h>
#include <stdlib.h>

typedef struct NodeType
{
    int data;
    struct NodeType *next;
    struct NodeType *prev;
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
    temp->prev = NULL;
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

void insert()
{
    int opt, d;

    printf("\nEnter Option:[1] Insert at Beginning:[2] Insert at End:[3] Insert at nth Position:\n-> ");
    scanf("%d", &opt);

    printf("Enter data to insert:\t");
    scanf("%d", &d);
    Node *t = create_node(d);
    Node *temp = head;

    if (opt == 1)
    {
        t->next = head;
        if (head != NULL)
            head->prev = t;
        head = t;
    }
    else if (opt == 2)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = t;
        t->prev = temp;
    }
    else
    {
        int n;
        printf("enter the posn");
        scanf("%d", &n);
        for (int i = 0; i < n - 1; i++)
        {
            temp = temp->next;
        }
        t->next = temp->next;
        t->prev = temp;
        if (temp->next != NULL)
            temp->next->prev = t;
        temp->next = t;
    }
}

void delete_node()
{
    int opt, n;
    Node *temp = head;

    printf("Enter Option:[1] Delete at Beginning:[2] Delete at End:[3] Delete at nth Position:\n-> ");
    scanf("%d", &opt);

    if (opt == 1)
    {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        free(temp);
    }
    else if (opt == 2)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    else
    {
        printf("enter the posn");
        scanf("%d", &n);
        for (int i = 0; i < n - 1; i++)
        {
            temp = temp->next;
        }
        Node *t = temp->next;
        temp->next = temp->next->next;
        if (temp->next != NULL)
            temp->next->prev = temp;
        free(t);
    }
}

void display()
{
    Node *t = head;
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

    printf("%d not found in the list.\n", n);
}

int main()
{
    int opt;

    while (1)
    {
        printf("\nEnter Option:[1] Insert:[2] Delete:[3] Display:[4] Count:[5] Search:[6] Exit:\n-> ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            insert();
            break;

        case 2:
            delete_node();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("%d\n", count());
            break;

        case 5:
            search();
            break;

        case 6:
            return 0;

        default:
            printf("Invalid Option\n");
        }
    }
}