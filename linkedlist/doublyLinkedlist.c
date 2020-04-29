#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *prev,*next;
};

struct node *start=NULL;

void insertFirstNode(){
    struct node*n;
    n = (struct node*)malloc(sizeof(struct node));
    printf("enter a number :");
    scanf("%d",&n->info);
    n->prev = NULL;
    n->next = NULL;
    if(start == NULL){
    start = n;
    }
    else {
        start->prev = n;
        n->next = start;
        start = n;
    }
} 

void deleteFirst(){
    struct node* temp;
    temp = start;
    if (start->prev == NULL && start->next == NULL){
        free(start);
    }
    if (start == NULL){
        printf("BHOO BHOO ITS EMPTY\n");
    }
    else{
        start = start->next;
        temp -> next = NULL;
        free(temp);
    }    
}
void Display(){
    if (start == NULL){
        printf("BHOO BHOO ITS EMPTY\n");
    }
    
    else{
        struct node* temp;
        temp = start;
        if(start->next == NULL && start->prev == NULL ){
        printf("%d\n",start->info);
        }
        else{
        while(temp->next != NULL){
            printf("%d\n",temp->info);
            temp = temp->next; 
        }
        printf("%d\n",temp->info);
        }
    }
}

main(){
    int ch;
    while(1){
        printf("1. insert first\n");
        printf("2. delete first\n"); 
        printf("3. display\n");
        printf("enter your choice : \n");
        scanf("%d",&ch);

        switch(ch){
        case 1: insertFirstNode();
                break;
        case 2: deleteFirst();
                break;
        case 3: Display();
                break; 
                }               
    }

}    

#please add comments to make it readable
