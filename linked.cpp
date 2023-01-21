#include<iostream>
#include<malloc.h>
using namespace std;
int  main()
{   struct node *head;
    struct node *p;
    struct node *q;
    head=struct node *malloc(sizeof(struct node));
    p=struct  node *malloc(sizeof(struct node));
    q=struct node *malloc(sizeof(struct node));
    head->data=9;
    head->next=p;
    p->data=6;
    p->next=q;
    q->data=8; 
    q->next=NULL;
    printlist(head);
    return 0;
} 
void printlist(head)
{
    while(head->next!=NULL)
    {
        head=head->next;
        cout<<head->data<<" ";
    }
}