#include <stdio.h>

#define MAX 5

int pq[MAX];
int n = 0;

void insert(int x)
{
    if(n == MAX)
    {
        printf("Queue Overflow\n");
        return;
    }

    pq[n] = x;
    n++;
}

void delete()
{
    if(n == 0)
    {
        printf("Queue Underflow\n");
        return;
    }

    int i, pos = 0;

    for(i = 1; i < n; i++)
    {
        if(pq[i] < pq[pos])
            pos = i;
    }

    printf("Deleted element: %d\n", pq[pos]);

    for(i = pos; i < n-1; i++)
        pq[i] = pq[i+1];

    n--;
}

void display()
{
    if(n == 0)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Priority Queue:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", pq[i]);
    printf("\n");
}

int main()
{
    insert(30);
    insert(10);
    insert(40);
    insert(20);

    display();

    delete();
    delete();
    delete();
    delete();
    display();

    return 0;
}
