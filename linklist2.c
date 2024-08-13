#include <stdio.h>
#include <stdlib.h>

struct linklist
{
    int info;
    struct linklist *link;
};

struct linklist *insert_beginning(struct linklist *, int);
struct linklist *delete_beg(struct linklist *);
struct linklist *insert_end(struct linklist *, int);
struct linklist *delete_end(struct linklist *, int);
struct linklist *delete_giveNumber(struct linklist *, int);
struct linklist *insert_before(struct linklist *, int, int);
struct linklist *insert_after(struct linklist *, int, int);
int CountofNode(struct linklist *);
void sercher(struct linklist *, int x);
void display(struct linklist *);

struct linklist *create_node(int x)
{
    struct linklist *new_node = (struct linklist *)malloc(sizeof(struct linklist));
    new_node->info = x;
    new_node->link = NULL;
    return new_node;
}

void main()
{
    int choice, x, n;
    struct linklist *first = NULL;

    do
    {
        printf("Press 1 to insert at the beginning\n");
        printf("Press 2 to insert at the end\n");
        printf("Press 3 to insert before a node\n");
        printf("Press 4 to insert after a node\n");
        printf("press 5 to delete at the bigging\n");
        printf("press 6 to delete at the end\n");
        printf("press 7 to delete at the GiveNumber\n");
        printf("press 8 to Count all node\n");
        printf("press 9 to Sercher given node\n");
        printf("Press 10 to display\n");
        printf("Press 0 to exit\n");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element to insert at the beginning: ");
            scanf("%d", &x);
            first = insert_beginning(first, x);
            break;
        case 2:
            printf("Enter element to insert at the end: ");
            scanf("%d", &x);
            first = insert_end(first, x);
            break;
        case 3:
            printf("Enter the value to insert: ");
            scanf("%d", &x);
            printf("Enter the value before which to insert: ");
            scanf("%d", &n);
            first = insert_before(first, x, n);
            break;
        case 4:
            printf("Enter the value to insert: ");
            scanf("%d", &x);
            printf("Enter the value after which to insert: ");
            scanf("%d", &n);
            first = insert_after(first, x, n);
            break;
        case 5:
            printf("Delete at the bigging of linklist\n");
            first = delete_beg(first);
            break;

        case 6:
            first = delete_end(first, x);
            break;

        case 7:
            printf("Delete givenumber\n");
            printf("Enter the number Delete of node\n");
            scanf("%d", &x);
            first = delete_giveNumber(first, x);
            break;

        case 8:
             
            printf("Total node of:%d\n", CountofNode(first));
            break;

        case 9:
            printf("Enter the node to sercher");
            scanf("%d", &x);
            sercher(first, x);
            break;

        case 10:
            display(first);
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("Enter a valid choice\n");
            break;
        }
    } while (1);
}

struct linklist *insert_beginning(struct linklist *first, int x)
{
    struct linklist *new_node = create_node(x);
    new_node->link = first;
    first = new_node;
    return first;
}

struct linklist *insert_end(struct linklist *first, int x)
{
    struct linklist *ptr = first;
    struct linklist *new_node = create_node(x);

    if (first == NULL)
    {
        first = new_node;
    }
    else
    {
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = new_node;
        new_node->link = NULL;
    }
    return first;
}

struct linklist *insert_before(struct linklist *first, int x, int n)
{
    struct linklist *ptr = first;
    struct linklist *preptr = NULL;
    struct linklist *new_node = create_node(x);

    if (first == NULL)
    {
        printf("List is empty\n");
    }

    if (first->link == NULL)
    {
        new_node->link = first;
        first = new_node;
    }

    while (ptr->info != n)
    {
        preptr = ptr;
        ptr = ptr->link;
    }

    preptr->link = new_node;
    new_node->link = ptr;
    return first;
}

struct linklist *insert_after(struct linklist *first, int x, int n)
{
    struct linklist *ptr = first;
    struct linklist *new_node = create_node(x);

    if (first == NULL)
    {
        printf("List is empty\n");
        return first;
    }

    while (ptr->info != n)
    {
        ptr = ptr->link;
    }

    new_node->link = ptr->link;
    ptr->link = new_node;
    return first;
}

struct linklist *delete_beg(struct linklist *first)
{
    struct linklist *ptr = first;
    if (first == NULL)
    {
        printf("Linklist is empty");
    }
    else if (ptr->link == NULL)
    {
        free(ptr);
        first = NULL;
    }
    else
    {
        first = ptr->link;
        free(ptr);
    }
    return first;
}
struct linklist *delete_end(struct linklist *first, int x)
{
    struct linklist *ptr = first;
    struct linklist *preptr = first;

    if (first == NULL)
    {
        printf("linklist is empty");
    }
    else if (ptr->link == NULL)
    {
        free(ptr);
        first = NULL;
    }
    else
    {
        while (ptr->link != NULL)
        {
            preptr = ptr;
            ptr = ptr->link;
        }
        printf("Delete node for:%d\n", ptr->info);
        preptr->link = NULL;
        free(ptr);
    }
    return first;
}

struct linklist *delete_giveNumber(struct linklist *first, int x)
{
    struct linklist *ptr = first;
    struct linklist *preptr = first;

    if (first == NULL)
    {
        printf("Linklist is empty\n");
    }
    else
    {
        while (ptr->info != x)
        {
            preptr = ptr;
            ptr = ptr->link;
        }
        preptr->link = ptr->link;
        printf("Delete a node:%d\n", ptr->info);
        free(ptr);
    }
    return first;
}

int CountofNode(struct linklist *first)
{
    struct linklist *ptr = first;
    int Count = 0;

    if (first == NULL)
    {
        printf("Linklist is empty");
    }
    else
    {
        while (ptr != NULL)
        {
            Count++;
            ptr = ptr->link;
        }
    }
    return Count;
}

void sercher(struct linklist *first, int x)
{
    struct linklist *ptr = first;
    int flage = 0;
    if (first == NULL)
    {
        printf("Linklist is empty");
    }
    else
    {
        while (ptr != NULL)
        {
            if (ptr->info == x)
            {
                flage = 1;
                break;
            }

            ptr = ptr->link;
        }
        if (flage == 1)
        {
            printf("Node is found\n");
        }
        else
        {
            printf("Node is not found\n");
        }
    }
}
void display(struct linklist *first)
{
    struct linklist *ptr = first;
    if (first == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("Linked list data: ");
        while (ptr != NULL)
        {
            printf("%d ", ptr->info);
            ptr = ptr->link;
        }
        printf("\n");
    }
}
