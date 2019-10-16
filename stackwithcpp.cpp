#include<iostream>
using namespace std;

void pop();
void push();
void display();
int top=-1,MAX;
int *stack;
int main()
{
	int x;
	cout<<"enter stack Size";
	cin>>MAX;
	stack=new int[MAX];
	
	do
	{
		cout<<"1.PUSH"<<endl<<"2.POP"<<endl<<"3.Display"<<endl;
	    cin>>x; 
		switch(x)
		{
			case 1: push();
			  		break;
		    case 2: pop();
			  		break;
	        case 3: display();
			  		break;
			default:
			       cout<<"You enter Wrong Choice";
				   		  	
		}
	}while(x!=0);
	return 0;
	
}
void push()
{
	int value;
  if(top==MAX-1)
  {
  	cout<<"Stack is Fulll"<<endl;
  }
  else{
  	 top++;
  	 cout<<"Enter Value"<<endl;
  	 cin>>value;
  	 stack[top]=value;
  	
  }	
}
void pop()
{
	if(top==-1)
	{
		cout<<"\nStack is UnderFlow"<<endl;
	}
	else
	{
		top=top-1;
	}
}
void display()
{
	if(top==-1)
	{
		cout<<"\n Stack is Empty"<<endl;
		
	}
	else
	{
		cout<<"\nStack Elements"<<endl;
		for(int i=top;i>=0;i--)
		{
			cout<<stack[i]<<endl;
		}
	}
}
