#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;

void push(int x)
{

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory alocation is failed");
        return;
    }
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}


void pop ()
{
struct node * temp=top;


if(top==NULL)
{
    printf("stack is underflow \n");
}
else{
    printf("%d\n",top->data);
    top=top->next;
    free(temp);
}

}


void display()
{
    struct node *temp;
    temp = top;
    if (temp == NULL)
    {
        printf("stack is empty\n");
    }
    else

    {
        while(temp!=NULL)
        {
        printf("%d\n", temp->data);
        temp = temp->next;
        }
    }
    
}

int main()
{
    int choice;
    char ch;
    do
    {
        printf("1: Push, 2: Pop,3:print, 0: Exit\n");
        printf("enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
         printf("enter the value you want to push\n");
         int x;
      scanf("%d",&x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("wrong choice\n");
        }

        printf("Press y to continue or any other key to exit: ");
        scanf(" %c", &ch);
       
    } 
    
      while (ch == 'y' || ch == 'Y');
    return 0;
    
}
