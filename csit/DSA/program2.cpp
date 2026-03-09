#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue()
{
    int value;
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == -1)
            front = 0;

        printf("Enter value: ");
        scanf("%d", &value);

        rear++;
        queue[rear] = value;

        printf("Element enqueued: %d\n", value);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front++;
    }
}

void displayFront()
{
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
        printf("Front element: %d\n", queue[front]);
}

void display()
{
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else
    {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++)
            printf("%d\n", queue[i]);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("***********Menu**********\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display Front\n4.Display\n5.Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            displayFront();
            break;

        case 4:
            display();
            break;

        case 5:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}