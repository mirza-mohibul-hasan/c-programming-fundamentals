#include<stdio.h>
#include<stdbool.h>

#define CAPACIY 5

int my_queue[CAPACIY];
int front=0, rear=-1, total_items=0;

bool queue_is_full()
{
    if(total_items== CAPACIY)
    {
        return true;
    }
    else
        return false;
}
bool queue_is_empty()
{
    if(total_items== 0)
    {
        return true;
    }
    else
        return false;
}

void enqueue(int item)
{
    if(queue_is_full())
    {
        printf("Queue is full\n");
        return;
    }

    rear = (rear+1)%CAPACIY;
    my_queue[rear]= item;
    total_items++;
}
int dequeue()
{
    if(queue_is_empty())
    {
        printf("Queue is empty\n");
        return -1;
    }
    int removed_item = my_queue[front];
    my_queue[front]= -1;
    front = (front+1)%CAPACIY;
    total_items--;
    return removed_item;
}
void display_queue()
{
    printf("Queue : ");
    for(int i=0; i<CAPACIY; i++)
    {
        printf("%d",my_queue[i]);
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display_queue();
    enqueue(50);
    display_queue();
    printf("Dequeue: %d\n",dequeue());
    display_queue();
    enqueue(60);
    display_queue();

    return 0;
}
