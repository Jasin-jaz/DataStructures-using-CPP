//Program to perform stack operations
#include<iostream>
#include<stdlib.h>
#define max 10
using namespace std;
class stack
{
	int st[max],top,item;
	public:
	stack()
	{
		top=-1;
	}
	void push();
	void pop();
	void display();
};
void stack::push()
{
	int item;
 	if(top==max-1)
 		cout<<"Stack is full\n";
 	else
 	{
 		cout<<"Enter the item to be inserted: ";
 		cin>>item;
 		top++;
 		st[top]=item;
 		cout<<item<<" is pushed in to the stack\n";
 	}
}
void stack::pop()
{
 	int d;
 	if(top==-1)
 		cout<<"Stack is empty\n";
 	else
 	{
 		d=st[top];
 		top--;
 		cout<<d<<" is poped from the stack\n";
 	}
}
void stack:: display()
{
 	int i;
 	cout<<"New stack is \n";
 	for(i=top;i>=0;i--)
 		cout<<"\t"<<st[i]<<"\n";
}
int main()
{
	int c;
	stack s;
	do
	{
	 	cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
	 	cout<<"Enter your choice:";
	 	cin>>c;
	 	switch(c)
	 	{
	 		case 1:s.push();break;
	 		case 2:s.pop();break;
	 		case 3:s.display();break;
	 		case 4:exit(0);break;
	 		default:cout<<"invalid choice\n";
	 	}
	}while(c<=4);
	return 0;
}
