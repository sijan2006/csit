#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
void enqueue()
{
    int value;
    if ((rear + 1) % MAX == front)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("Element enqueued: %d\n", value);
    }
}
void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
}
void displayFront()
{
    if (front == -1)
        printf("Queue is empty\n");
    else
        printf("Front element: %d\n", queue[front]);
}
void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i = front;
        printf("Queue elements:\n");
        while (1)
        {
            printf("%d\n", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % MAX;
        }
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display Front\n4.Display\n5.Exit\n");
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