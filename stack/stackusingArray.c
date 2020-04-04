#include<stdio.h>
#include<stdlib.h>
struct stackArray{
  int top;
  int capacity;
  int *array;
};
struct stackArray *createStack(int cap){
  struct stackArray *stack;
  stack = malloc(sizeof(struct stackArray));
  stack -> capacity = cap;
  stack -> top = -1;
  stack -> array = malloc(sizeof(int) *stack->capacity);
  return stack;
}



int isFull(struct stackArray *stack){
  if(stack->top == (stack->capacity)-1){
    return 1;
  }
  else{
    return 0;
  }
}
int isEmpty(struct stackArray *stack){
  if(stack->top == -1){
    return 1;
  }
  else{
    return 0;
  }
}
void push(struct stackArray *stack,int a){
  if(isFull(stack)){
    printf("Stack is full");

    }
  if (!isFull(stack)){
    stack->top++;
    stack->array[stack->top] = a;
    }
}
void pop(struct stackArray *stack){
  if(isEmpty(stack)){
    printf("stack is empty");

  }
  if(!isEmpty(stack)){
    stack->top--;
  }
}
void display(struct stackArray *stack){
  if(!isEmpty(stack)){
    for(int i=0;i< stack->capacity;i++){
      printf("%d\n",stack->array[i]);
    }
  }
  else{
    printf("stack is empty");

  }
}

main(){
  int choice,item;
  struct stackArray *stack;
  stack = createStack(5);
  while(1){
    printf("\n1, push");
    printf("\n2. pop");
    printf("\n3, display");
    printf("\n4, exit");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
      case 1: printf("\n \nEnter number you want to push: ");
              scanf("%d",&item);
              push(stack,item);
              break;
      case 2: pop(stack);
              break;
      case 3: display(stack);
              break;
      case 4: exit(0);
    }

  }
}
