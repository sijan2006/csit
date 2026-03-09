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

void print_menu()
{
    printf("\nEnter Option:\n[1] Insert:\n[2] Delete:\n[3] Display:\n[4] Count:\n[5] Search:\n[6] Exit:\n-> ");
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

void ins_at_nth(int data, int n)
{
    if (n > count())
    {
        printf("Invalid Position.");
        return;
    }

    Node *t = create_node(data);

    if (n == 0)
    {
        t->next = head;
        head = t;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < n - 1; i++)
        temp = temp->next;

    t->next = temp->next;
    temp->next = t;
}

void insert()
{
    int opt, d, n;

    printf("\nEnter Option:\n[1] Insert at Beginning:\n[2] Insert at End:\n[3] Insert at nth Position:\n-> ");
    scanf("%d", &opt);

    printf("Enter data to insert:\t");
    scanf("%d", &d);

    if (opt == 1)
        n = 0;
    else if (opt == 2)
        n = count();
    else
        scanf("%d", &n);

    ins_at_nth(d, n);
}

void del_at_nth(int n)
{
    if (head == NULL)
    {
        printf("List Empty.");
        return;
    }

    if (n >= count())
    {
        printf("Enter Valid Position.");
        return;
    }

    Node *t = head;

    if (n == 0)
    {
        head = head->next;
        free(t);
        return;
    }

    for (int i = 0; i < n - 1; i++)
        t = t->next;

    Node *temp = t->next;
    t->next = t->next->next;
    free(temp);
}

void delete_node()
{
    int opt, n;

    printf("Enter Option:\n[1] Delete at Beginning:\n[2] Delete at End:\n[3] Delete at nth Position:\n-> ");
    scanf("%d", &opt);

    if (opt == 1)
        n = 0;
    else if (opt == 2)
        n = count() - 1;
    else
        scanf("%d", &n);

    del_at_nth(n);
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
        print_menu();
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