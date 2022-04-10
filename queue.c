#include <stdio.h>
#include <stdlib.h>

int top=-1;
int *queue;

void enqueue(int element){
    top++;
    queue[top] = element;
}

void dequeue(int size){
    for(int i=1; i<size;i++){
        queue[i-1] = queue[i];
    }
    top--;
}



int main()
{
    int size=5;

    queue = (int *) malloc(sizeof(int) * size);

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    printf("Po dodaniu wartosci\n");
    for (int i=0;i<size;i++){
        printf("queue[%d]: %d \n", i, queue[i]);
    }

    dequeue(size);
    dequeue(size);

    printf("\nPo usuniecia wartosci\n");
    for (int i=0;i<top+1;i++){
        printf("queue[%d]: %d \n", i, queue[i]);
    }

}
