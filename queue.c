#include <stdio.h>
#include <stdlib.h>

void Enqueue(int[], int, int);
void Dqueue(int[], int);
void display(int[], int);

int front = -1;
int rear = -1;

void main() {
    int n, x, choice;
    printf("Enter the capacity of the queue: ");
    scanf("%d", &n);

    int q[n];

    do {
        printf("Press 1 for Enqueue operation \n");
        printf("Press 2 for Dqueue operation \n");
        printf("Press 3 for display operation \n");
        printf("Press 0 for exit \n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert\n");
                scanf("%d", &x);
                Enqueue(q, x, n);
                break;
            case 2:
                Dqueue(q, n);
                break;
            case 3:
                display(q, n);
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (1);
}

void Enqueue(int q[], int x, int n) {
    if (rear >= n - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = rear + 1;
    q[rear] = x;
    printf("Inserted: %d\n", x);
}

void Dqueue(int q[], int n) {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted element is %d\n", q[front]);
    front = front + 1;

    if (front > rear) {
        front = rear = -1; // Reset the queue when it's empty
    }
}

void display(int q[], int n) {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", q[i]);
    }
    printf("\n");
}
