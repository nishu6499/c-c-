#include<iostream>
using namespace std;
class cal
{
	public:
	int calc();
     ~cal();
};
int cal::calc()
{
	    int a,b,c;
	    char op;
		cout<<"\nEnter the value of 2 numbers :";
		cin>>a>>b;
		cout<<"\nEnter the operation to be performed :";
		cin>>op;
		{
		switch(op)
		{
			case '+': 
			{
				cout<<a+b;
				break;
			}
			case '-':
			{
				cout<<a-b;;
				break;
			}	
			case '*':
			{
				cout<<a*b;
				break;
			}
			case '/':
			{
				cout<<a/b;
				break;
			}
			case '%':
			{
				cout<<a%b;
				break;
			}	
		}
	    }
}
 cal::~cal()
{
	cout<<"\nDestructor called";
}
int main()
{
	int i=0;
	char response;
	cal c;
	c.calc();
	for(i=0;i<=100;i++)
	{
	cout<<"\nDo you want to perform any other operation (Y/N) :";
	cin>>response;
	if(response=='y'||response=='Y')
	{
			c.calc();
	}
	else if(response=='n'||response=='N')
	{
		c.~cal();
		return 0;
	}
	else
	{
		cout<<"\nEnter Valid Input";
	}
    }
}
