#include <stdio.h>
#include <stdlib.h>

int *stack;
int top=-1;
_Bool stack_empty(int top){
    if (top == -1){
        printf("stos pust \n ");
        return 1;
    }
    else{
        printf("stos nie jest pusty \n ");
    return 0;
    }
}

int Top(){
    return stack[top];
}


int push(int element){
    top++;
    stack[top] = element;

}

int pop(){
      if (stack_empty(top)==0){
        top--;
    }
}


int main()
{
    stack = (int *) malloc(sizeof(int) * 6);

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    printf("\n Stos po dodaniu wartosci\n");


    for (int i=0;i<top+1;i++){
        printf("stos[%d]: %d \n", i, stack[top-i]);
    }

    printf("\n Stos po wywolaniu funkcji pop() \n");

        pop();
        pop();

    for (int i=0;i<top+1;i++){
        printf("stos[%d]: %d \n", i, stack[top-i]);
    }

    printf("\n Wywolanie stosu = %d ", Top());
}
