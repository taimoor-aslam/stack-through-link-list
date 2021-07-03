#ifndef _STACK_H
#define _STACK_H
#include<iostream>
using namespace std;


class NODE
{
private:
	int data;
	NODE *next;
public:
	void setdata(int val)
	{
		data=val;
	}
	int getdata()const
	{
		return data;
	}
	void setnext(NODE *ptr)
	{
		next=ptr;
	}
	NODE* getnext()
	{
		return next;
	}
};
class Stack
{
private:
	NODE *top;
public:
	Stack();
	bool isEmpty();
	void push(int);
	int pop();
	int showTop();
};
#endif