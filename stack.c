#include<stdio.h>
#include<conio.h>
#define max 5
int top=-1,ch,x;
int stack[max];
void push();
void pop();
void display();

int main(){
	//clrscr();
	
	printf("\n------STACK-----\n");
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit ");
	do
	{
		printf("\nEnter Choice:-");
		scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("\nExit");
			break;	
		default:
			printf("\nEnter valid choice:-");			
	}
    }while(ch!=4);
    
    return 0;
}
void push()
{
	if(top>=(max-1))
	{
		printf("\ntack is over flow");
	}
	else{
		printf("\nEnter value to be pushed=");
		scanf("%d",&x);	
	//	printf("\n%d value ");
		top++;
		stack[top]=x;	
	}
	
}
void pop()
{
	if(top==-1)
	{
		printf("\nStack is underflow");
	}
	else
		top=top-1;
}
void display()
{
	if(top==-1)
	{
		printf("\n Stack is Empty");
	}
	else
	{
	int i;
		for(i=0;i<=top;i++)
		{
			printf("\n%d",stack[i]);
		}
	}
}
