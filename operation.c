#include <stdio.h>
#include <process.h>
#include <stdlib.h>
int push(int[], int, int, int);
int pop(int[], int);
int peep(int[], int, int);
int change(int[], int, int, int);
void display(int[], int);

void main()
{
   int choice, top, n = 100, x, pos;
    top = -1;
    int a[n];
    do
    {
        printf("press 1 for push operation \n");
        printf("press 2 for pop operation \n");
        printf("press 3 for peep operation \n");
        printf("press 4 for change operation \n");
        printf("press 5 for display operation \n");
        printf("press 0 for exit \n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to be pushed \n");
            scanf("%d", &x);
            top = push(a, top, n, x);

            break;
        case 2:

            top = pop(a, top);
            break;
        case 3:
            printf("peep operation");
            break;
        case 4:
            printf("change operation");
            break;
        case 5:
            // printf("display operation");
            display(a, top);
            break;
        case 0:
            exit(0);
            break;

        default:
            printf("Enter a valid choice");
            break;
        }
    } while (1);
}

int push(int a[], int top, int n, int x)
{
    if (top >= n - 1)
    {
        printf("Stack overflow \n");
    }
    else
    {
        a[++top] = x;
        printf("Pushed %d\n", x);
    }
    return top;
}
int pop(int a[], int top)
{
    if (top < 0)
    {
        printf("Stack underflow \n");
    }
    else
    {
        printf("Popped %d\n", a[top--]);
    }
    return top;
}
void display(int a[], int top)
{
    if (top < 0)
    {
        printf("Stack is empty=%d \n",top);
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d\n", a[i]);
        }
    }
}
