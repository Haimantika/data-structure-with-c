#include<stdio.h>
#include<stdlib.h>
struct node{
                 int data;
                 struct node* link;

}; //struct should end with the ; (semi colon)
struct node* root = NULL;

void main(){
            int ch;
            while(1){

                        printf("******single linkedlist operations******\n");
                        printf("1. Append\n");
                        printf("2. Add at begin\n");
                        printf("3. Add at after\n");
                        printf("4. Length of list\n");
                        printf("5. Display\n");
                        printf("6. Delete\n");
                        printf("7. quit\n");

                        printf("Enter your choice: ");
                        scanf("%d",&ch);

                        switch(ch){
                                     case 1: append();
                                             break;
                                     case 2: begin();
                                             break;
                                     case 3: after();
                                             break;
                                    // case 4: length();
                                      //       break;
                                     case 5: display();
                                             break;
                                     /*case 6: delete();
                                             break;
                                     case 7: quit();
                                             break;  */
                                     default: printf("Invalid input\n ");
                                   }
                    }
           }

void append(){
                struct node* temp;
                temp = (struct node*)malloc(sizeof(struct node)); //type casting is important because malloc will return void type
                printf("Enter node data: ");
                scanf("%d",&temp->data);
                temp->link = NULL;
                if (root == NULL){
                                     root = temp;

                                 }
                else{
                       struct node* p ;
                       p = root;
                       while (p->link != NULL){
                                                  p = p->link;

                                              }
                      p->link = temp;

                    }
              }

void begin(){
               struct node* temp;
               temp = (struct node*)malloc(sizeof(struct node));
               printf("Enter data to add at begin: ");
               scanf("%d",&temp->data);
               temp->link = NULL;
               if (root ==  NULL){
                                    root = temp;
                                 }
               else{
                      temp->link = root;
                      root = temp;
                   }
            }
void after(){
              int pos;
              struct node* temp;
              temp =  (struct node*)malloc(sizeof(struct node));
              printf("Tell me after which node you want to enter the new nodce: ");
              scanf("%d",&pos);
              printf("Enter the data of new node: ");
              scanf("%d",temp->data);
              temp->link =  NULL;
              if(root == NULL){
                                   printf("List is Empty\n");
                              }
              else{
                      struct node* search;
                      struct node* search2;
                      search = root;
                      search2 = root;
                      while(search->data != pos){
                                                     search = search->link;
                                                }
                      while(search2 != search){
                                                       search2 = search2->link;
                                                    }
                      temp->link = search2;
                      search->link = temp;
                  }
            }
void display(){
                 struct node* temp;
                 temp = root;
                 if(temp == NULL){
                                    printf("Sorry the list is EMPTY now \n");
                                 }
                 else{
                        while(temp->link != NULL){
                                                      printf("%d",temp->data);
                                                      temp = temp->link;
                                                      printf("\n");
                                                 }
                        if(temp->link == NULL){
                                                printf("%d",temp->data);
                                              }
                     }


              }
