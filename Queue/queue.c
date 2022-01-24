#include <stdlib.h>
#include <stdio.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int queueEmty(struct queue *q)
{
    if (q->f == q->r)
    {
        printf("queue is Emty \n");
        return 1;
    }
    printf("queue is not Emty \n");
    return 0;
}

int queueFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        printf("queue is Full \n");
        return 1;
    }
    printf("queue is not Full \n");
    return 0;
}
int addElement(struct queue *q, int value)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
        printf("add element successfully \n");
    }
}
int removeElement(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        q->f++;
        return q->arr[q->f];
    }
}
int main()
{
    struct queue q;
    q.f = q.r = -1;
    q.size = 5;
    q.arr = (int *)malloc(q.size * sizeof(int));
    printf("Before insertion & deletion \n");
    queueEmty(&q);
    queueFull(&q);
    printf("\nelement added in queue \n");
    addElement(&q, 23);
    queueEmty(&q);
    queueFull(&q);

    printf("\ndeleted element : %d \n", removeElement(&q));
    queueEmty(&q);
    queueFull(&q);
}