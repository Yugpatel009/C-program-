#include <stdio.h>
#include <stdlib.h>

int front = -1, rear = -1;

void enqueue(int[], int, int);
void dequeue(int[], int);
void display(int[], int);

int main()
{
    int choice, n, x;

    printf("Enter size of queue: ");
    scanf("%d", &n);
    int a[n];

    do
    {
        printf("Press 1 to enqueue\n");
        printf("Press 2 to dequeue\n");
        printf("Press 3 to display\n");
        printf("Press 0 to exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enqueue\n");
            printf("Enter value: ");
            scanf("%d", &x);
            enqueue(a, x, n);
            break;

        case 2:
            printf("Dequeue\n");
            dequeue(a, n);
            break;

        case 3:
            printf("Display\n");
            display(a, n);
            break;

        case 0:
            exit(0);

            break;

        default:
            printf("Enter a valid choice\n");
        }

    } while (1);
}

void enqueue(int a[], int x, int n)
{
    if ((rear == n - 1 && front == 0) || (front == rear + 1))
    {
        printf("Queue overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else if (front != 0 && rear == n - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    a[rear] = x;
}

void dequeue(int a[], int n)
{
    if (front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Remove an element from circluar Queue:%d\n",a[front]);
        if (front==rear)
        {
            front=rear=-1;
        }
        else if (front==n-1)
        {
            front=0;
        }
        front++;
        
    }
    
}

void display(int a[], int n)
{
    if (front == -1)
    {
        printf("queue is underflow\n");
    }
    else
    {
        printf("queue elements are:");
        for (int i = front; i <= rear; i++)
        {
            printf("%d,", a[i]);
        }
        printf("\n");
    }
}