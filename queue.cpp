#include<iostream>
using namespace std;
int MAX;
int front=-1,rear=-1;
int *que;
void enque();
void deque();
void display(); 
int main()
{
	int x;
	cout<<"\nenter Queue Size"<<endl;
	cin>>MAX;
	que=new int[MAX];
	
	do
	{
		cout<<"\nEnter your choice"<<endl;
		cout<<"\n1.Enque\n2.Deque\n3.Display"<<endl;
		cin>>x;
		
		switch(x)
		{
			case 1: enque();
					break;
			case 2: deque();
					break;
			case 3: display();
					break;
			default :
			      cout<<"Wrong choice";						
		}
	}while(x!=0);
	
}
void enque()
{
	int value;
	if(rear==MAX-1)
	{
		cout<<"\nQueue overflow"<<endl;
	}
	else if(front==-1 && rear==-1)
	{
		
		front=rear=0;
		cout<<"\nEnter Queue value"<<endl;
		cin>>value;
		que[rear]=value;
	}
	else
	{
		rear++;
		cout<<"\nEnter Queue value"<<endl;
		cin>>value;
		que[rear]=value;
	}
	
	
}
void deque()
{
	if(front==-1 && rear==-1)
	{
		cout<<"\nQueue undeflow"<<endl;
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front++;
	}
	
}
void display()
{
	
	if(front==-1 && rear==-1)
	{
		cout<<"\nQueue undeflow"<<endl;
	}
	else
	{
		cout<<"\nQueue Element"<<endl;
		for(int i=front;i<=rear;i++)
		{
			cout<<que[i]<<" ";
		}
	}
	
}
