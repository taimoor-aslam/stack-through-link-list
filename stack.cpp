#include"stack.h"
Stack::Stack()
{
	top=NULL;
}
bool Stack::isEmpty()
{
	return top==NULL;
}
void Stack::push(int val)
{
	NODE*newnode=new NODE();
	newnode->setdata(val);
	newnode->setnext(top);
	top=newnode;
	
}
int Stack::pop()
{
	if(!isEmpty())
	{
		int val=top->getdata();
		NODE*temp=top;
		top=top->getnext();
		delete temp;
		return val;
	}
	else
	{
		cout<<"Stack is empty."<<endl;
		system("pause");
	}

}
int Stack::showTop()
{
	return top->getdata();
}
