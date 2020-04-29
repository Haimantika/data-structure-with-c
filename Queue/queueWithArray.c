#include<stdio.h>
#include<stdlib.h>
struct arrayQueue{
    int front,rear;
    int capacity;
    int *array;
};
struct arrayQueue *createArrayQueue(capacity){
    struct arrayQueue *Q = malloc(sizeof(struct arrayQueue));
    if (!Q){
        return(NULL);
    }
    Q->capacity = capacity;
    Q->front= -1;
    Q->rear = -1;
    Q->array = malloc(Q->capacity*sizeof(int));
    if(!Q->array){
        return(NULL);
    }
    return(Q);
}
void enQueue(struct arrayQueue *Q, int data){
    if(isFullQueue(Q)){
        printf("\noverflow\n");
    }
    else{
        Q->rear = (Q->rear+1)%(Q->capacity);
        Q->array[Q->rear] = data;
        
        if(Q->front == -1){
        Q->front = Q->rear;
        }
        }
    
}
void dQueue(struct arrayQueue*Q){
    int data = -1;
    if(isEmptyQueue(Q)){
        printf("Queue is empty");
        return -1;
    }
    else {
        data = Q->array[Q->front];
        if(Q->front == Q->rear){
            Q->front = -1;
            Q->rear = -1;
        }
        else{
            Q->front = (Q->front+1)%(Q->capacity);
        }
        
    }
    printf("%d Deleted", data);
}
int isEmptyQueue(struct arrayQueue *Q){
    return((Q->front == -1) && (Q->rear == -1));
}
int isFullQueue(struct arrayQueue *Q){
    return(((Q->rear+1) % Q->capacity) == (Q->front));
}
void QueueSize(struct arrayQueue *Q){
    
    int bablu = ((Q->capacity - Q->front) + (Q->rear + 1))%(Q->capacity);
    if(bablu == 0){
        printf("%d",Q->capacity);
    }
    else{
        printf("%d",bablu);
    }
}

void Dispay(struct arrayQueue *Q){
     
     if(!isEmptyQueue(Q)){
        if((Q->front)<(Q->rear)){
            for (int i=Q->front; i<= Q->rear; i++){
                printf("%d\n",Q->array[i]);
            }
        }
        if((Q->front)>(Q->rear)){
            for(int j=Q->front;j<(Q->capacity);j++){
                printf("%d\n",Q->array[j]);
            }
            for(int k=0;k<=(Q->rear);k++){
                printf("%d\n",Q->array[k]);
            }
        }
        if(Q->front == 0 && Q->rear == 0){
            printf("%d\n",Q->array[0]);
        }
    }
    else{
        printf("Empty QUEUE");
    }
}
main(){
  int choice,item,capa;
  printf("enter Queue capacity: ");
  scanf("%d",&capa);
  struct arrayQueue *Q;
  Q = createArrayQueue(capa);
  while(1){
    printf("\n1, enQueue");
    printf("\n2. dQueue");
    printf("\n3, display");
    printf("\n4, size\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
      case 1: printf("\n \nEnter number you want to ENQ: ");
              scanf("%d",&item);
              enQueue(Q,item);
              break;
      case 2: dQueue(Q);
              break;
      case 3: Dispay(Q);
              break;
      case 4: QueueSize(Q);
    }

  }
}

#add a description
