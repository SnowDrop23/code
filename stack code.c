
//stack
#include<stdio.h>
#define N 5
int stack[N];
int top = -1; 


void push()
{
    int x;
    printf("Please enter a data: ");
    scanf("%d", &x);

    if(top == N-1) printf("Stack Overflow! Can't push.\n");
    else
    {
        top++;
        stack[top] = x;
        printf("%d pushed into the stack.\n", x);
    }
}

void pop()
{
    if(top == -1) printf("Stack Overflow!\n");
    else
    {
        printf("%d poped from the stack.\n", stack[top]);
        top--;
    }
}

void display()
{
    if(top == -1) printf("Stack is empty.\n");
    else {
        printf("Stack elements: ");
        for(int i = top; i >= 0; --i) printf("%d ", stack[i]);
        printf("\n");
    }
}

int main(void)
{ 
    int choice;
    while (1)
    {
        printf("Stack Menu: \n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: push();
                        break;
            case 2: pop();
                        break;
            case 3: display();
                        break;
            case 4: printf("Exiting.."); return 0;
            default: printf("Invalid choice\n");
        }        
    }
    

}
