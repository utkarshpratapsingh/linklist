#include<stdio.h>
#include<conio.h>
#include<cstdlib>
#include<malloc.h>
 struct ListNode{
 int data;
 struct ListNode *next;
 };




 void Insert(struct ListNode *head, int data , int postion){
 int k=1;
 struct ListNode *p, *q, *newNode;
 newNode=(ListNode*)malloc(sizeof(struct ListNode));
 if(!newNode){
    printf("Memory Error");
    return;
 }
 newNode->data = data;
 p=head;
 if(postion==1){
    newNode->next=p;
     head=newNode;
 }
 else{
    while((p!=NULL)&& (k<postion)){
        k++;
        q=p;
        p=p->next;
    }
    q->next=newNode;
    newNode->next=p;
 }

 }

 int treversing(struct ListNode *head){
 struct ListNode *current=head;
 int count=0;
 while(current!=NULL){
    count++;
    printf("%d",current->data);
    current=current->next;
 }
    return count;
 }
 int main()
{

ListNode *list1=NULL;

Insert(list1,5,1);
int a=treversing(list1);
printf("%d",a);
printf("utkarsh pratap singh");
return 0;
}


