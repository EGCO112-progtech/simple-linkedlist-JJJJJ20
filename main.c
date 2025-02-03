//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int c=5;
    struct node a,b,d,*head;
    a.value = c;
    a.next=&b;
    b.next=&d;
    b.next->value=11;
    d.value=11;
    head=&a;
    d.next=NULL;
    b.value=head->value+3;
    d.value=head->next->value+3;


    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head ->next->next->value );
    printf("Exercise I \n");
    /*1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL*/
 

    struct node f;
    f.next =&a;
    head=&f;
    f.value=2;
    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8
    printf("%d\n", head ->next->next->value );
    printf("%d\n", head ->next->next->next->value );
    
printf("Exercise II \n");
        /*1. Add 1 more than at the begining!!!!
        2. Add value (2)*/
        

    typedef struct node* NodePtr;
    typedef struct node* Node;
    NodePtr tmp=head; //add temp value to faciliate
    printf("%d\n",tmp->value);
        
      printf("Exercise III Use loop to print everything");
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
            tmp=tmp->next;
          // What is missing???
        }
        printf("\n");
    
    
   printf("Exercise IV change to while loop!! (you can use NULL to help)");
       
        /*tmp=head;       
         while(tmp!=NULL){
            printf("%3d", tmp->value);
            tmp=tmp->next;
           // What is missing???
        }
        printf("\n");*/
        for(tmp=head; tmp!=NULL;tmp=tmp->next){
            printf("%3d",tmp->value);
         }
           // What is missing???
        
        printf("\n");
    
    
 printf("Exercise V Use malloc to create all nodes, instead of create a struct!!");
         //use a loop to help
          
     
     /*head = (nodePtr) malloc(sizeof(Node));
     tmp=head;
     tmp->next=(nodePtr) malloc(sizeof(NODE));*/
     head = (NodePtr) malloc(sizeof(struct node));
     tmp=head;
     //tmp->value=0;
     
     for(i=0;i<3;i++)
     {
        tmp->value=i+3;
        tmp->next=(NodePtr) malloc(sizeof(struct node));
        //tmp->next->value=i+3;
        tmp=tmp->next;
     }
     tmp->value=i+3;
     tmp->next=NULL;       
         for(tmp=head; tmp!=NULL;tmp=tmp->next)
         {
            printf("%3d",tmp->value);
         }
           // What is missing???
        
        printf("\n");

    printf("Exercise VI Free all node !!");
         //use a loop to help
        for(tmp=head; tmp!=NULL;tmp=head)
         {
            head=head->next;
            printf(" Free%d ",tmp->value);
            free(tmp);
         }  
    printf("\n");
    
    return 0;
}
