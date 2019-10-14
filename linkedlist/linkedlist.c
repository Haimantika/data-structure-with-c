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

                        printf("\n******single linkedlist operations******\n");
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
                                     case 4: length();
                                             break;
                                     case 5: display();
                                             break;
                                     case 6: delete();
                                             break;
                        //             case 7: quit();
                          //                   break;
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
              int loc;
              int i = 1;
              int len;
              len = length();


              printf("Enter the location the node after which you want to insert new node!!:  ");
              scanf("%d",&loc);


              if(loc > len){
                                   printf("List is Empty\n");
                                   printf("The list is having %d elements\n",len);
                           }
              else{
                      struct node* temp,*p;
                      temp =  (struct node*)malloc(sizeof(struct node));
                      printf("Enter the data of new node: ");
                      scanf("%d",&temp->data);
                      p = root;
                      while(i<loc){
                                      p = p->link;
                                      i++;
                                  }
                      temp->link = p->link;
                      p->link = temp;
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
int length(){
                int count = 1;
                struct node* p;
                p = root;
                while(p->link != NULL){
                                          count++;
                                          p = p->link;

                                      }
                printf("%d",count);
                return count;
             }
void delete(){
                int loc;
                int i = 1;
                int len = length();
                printf("Enter the location you want to delete : ");
                scanf("%d",&loc);
                if (loc > len){
                                  printf("No location found enter valid location");

                              }
                else if(loc == 1){
                                     struct node *p;
                                     p = root;
                                     root = p->link;
                                     p->link = NULL;
                                     free(p);
                                 }
                else{
                        struct node *p,*q;
                        p = root;
                        while (i < loc-1){
                                              i++;
                                              p = p->link;
                                         }
                        q = p->link;
                        p->link = q->link;
                        q->link = NULL;
                        free(q);

                    }
             }
