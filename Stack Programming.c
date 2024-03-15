#include<stdio.h>
#include<stdlib.h>
int stack[100];
int top = -1;
void push(int size)
{
    if(top== size -1) 
    {
        printf("stack is o1verflow");
    }
    else
    {
        top++;
        printf("Enter element :");
        scanf ("%d", &stack[top]);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is underflow");
    }
    else
    {
       
        printf("%d is deleted", stack[top]);
         top--;
    }
}
void display()
{
    if(top== -1)
    {
        printf("stack is underflow");
    }
    else
    {
        int i;
        printf("stack element are : \n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
void main()
{
    int size;
    int choise;
    printf("enter size of stack :");
    scanf("%d", & size);
    do
    {
        printf("press 1 for push operation :\n");
        printf("press 2 for pop operation :\n");
        printf("press 3 for display operation :\n");
        printf("press 4 for exit :\n");
        scanf("%d",& choise);
        switch(choise)
        {
            case 1:
               push(size);
               break;
            case 2:
              pop();
              break;
            case 3:
               display();
               break;
            case 4:
              exit(0);
            default:
              printf ("wrong choice...");
              break;
        }
    }
    while (1);
}