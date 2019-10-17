#include<stdio.h>
#include<stdlib.h>

struct node{
              int data;
              struct node*link;
           };
struct node* top = NULL;

int ch;
void main(){
                while(1){
                            printf("******STACK IMPLEMANTATION WITH LINKD LIST******\n");
                            printf("1. to push element in stack\n");
                            printf("2. to delete top element\n");
                            printf("3. to display all Element\n");
                            scanf("%d",&ch);

                            switch(ch){
                                          case 1: push();
                                                  break;
                                          case 2: delete();
                                                  break;
                                          case 3: display();
                                                  break;
                                          default: printf("invalid input");
                                      }
                      }
          }

                  struct node* temp;
                  void push(){
                  temp = (struct node*)malloc(sizeof(struct node));
                  printf("enter new node data: ");
                  scanf("%d",&temp->data);
                  temp->link = top;
                  top = temp;
           }
void delete(){
                 if(top == NULL){
                                   printf("There is no element in the list");
                                }
                 else{
                         struct node*temp;
                         temp = top;
                         printf("element %d will be deleted: ",temp -> data);
                         top = top->link;
                         temp->link = NULL;
                         free(temp);
                     }
             }
void display(){
                  struct node* temp;
                  if(top == NULL){
                                      printf("stack is empty\n");

                                 }
                  else{
                          temp = top;
                          while(temp!=NULL){
                                                 printf("%d\n",temp->data);
                                                 temp = temp->link;
                                           }
                      }
              }
