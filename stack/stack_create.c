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
int main()
{

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 6;
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->arr[0]=10;
    s->top++;
    if (isEmty(s))
    {
        printf("stack is emty");
    }
    else
    {
        printf("stack is not emty");
    }
    return 0;
}
