//Program for Stack Primitive Operations

#include<stdio.h>
#include<conio.h>
#include<math.h>

int stack[5];
int top=-1;
void push();
void pop();
void peek();
void display();

void main()
{
    int choice;
        printf("enter choice:\npress 1 for push \npress 2 for pop \npress 3 for peek\npress 4 for display ");
        while(1)
        {
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: peek();
                break;
        case 4: display();
                break;
        case 5: exit(0);

        default:printf("invalid choice");
        }
        }
}

//push function
void push()
{
    int x;
    printf("enter data");
    scanf("%d",&x);
    if(top==4)
    {
        printf("overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }

}

//pop function
void pop()
{
    if(top==-1)
    {
       printf("underflow");
    }
    else
    {
      top--;
    }
}

//peek function
void peek()
{
    int x;
    printf("enter data");
    scanf("%d",&x);
    if(top==-1)
    {
        printf("empty stack");
    }
    else
    {
        printf("%d",stack[top]);
    }
}

//display or traverse
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}
