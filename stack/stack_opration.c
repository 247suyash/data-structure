#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmty(struct stack *ptr)
{
    if (ptr->top == -1)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("stack is already emty \n");
        return 1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int insert(struct stack *ptr, int value)
{
    if (ptr->top == ptr->size - 1)
    {
        printf("stack is already full \n");
        return 1;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("insert successfully %d  \n", ptr->arr[ptr->top]);
        return 0;
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 5;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("isEmty : %d \n", isEmty(s));
    printf("isFull : %d \n", isfull(s));

    insert(s, 10);
    insert(s, 20);
    insert(s, 30);
    insert(s, 40);
    insert(s, 50);
    insert(s, 60);
    printf("isEmty : %d \n", isEmty(s));
    printf("isFull : %d \n", isfull(s));

    printf("isEmty : %d \n", isEmty(s));
    printf("isFull : %d \n", isfull(s));
    int val = pop(s);
    printf("deleted element %d \n",val);
    printf("isEmty : %d \n", isEmty(s));
    printf("isFull : %d \n", isfull(s));

    return 0;
}
