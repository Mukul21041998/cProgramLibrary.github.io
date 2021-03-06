#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head , *temp1;

void create(int value)
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->data=value;
  temp->next=NULL;
  if(head==NULL)
  {
      head=temp;
      temp1=head;
  }

  else
  {
    temp1->next=temp;
    temp1=temp;
  }

}

void display()
{
  struct node *temp2;
  temp2=head;
  printf("List is:");
  while(temp2!=NULL)
  {
    printf("%d",temp2->data);
    temp2=temp2->next;

  }
  printf("\n");
}

void deletionatEnd()
{
  temp1=head;
  int c ,  i;

  while(temp1!=NULL)
  {
    temp1=temp1->next;
    c++;
  }

  temp1=head;
  for(i=0;i<(c-2);i++)
  {
    temp1=temp1->next;
  }
  temp1->next=NULL;
}

void displayafterDeletion()
{
  struct node *temp2;
  temp2=head;
  printf("New list is:");
  while(temp2!=NULL)
  {
    printf("%d",temp2->data);
    temp2=temp2->next;

  }
  printf("\n");
}

int main()
{
  head=NULL;
  int i,value , n;
  printf("Enter the numbber of nodes\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the value\n");
    scanf("%d",&value);
    create(value);
  }
  display();
  deletionatEnd();
  displayafterDeletion();
}
