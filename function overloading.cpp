#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int area(int l, int w)
{
	cout<<"area of rectangle :"<<l*w;
}
float area(float r)
{
	cout<<"area of circle :"<<3.14*r*r;
}
double area(double b, double h)
{
	cout<<"area of triangle :"<<0.5*b*h;
}
int main()
{
	int choice,l,w;
	float r;
	double b,h;
	cout<<"1.rectangle\n2.circle\n3.triangle";
	cout<<"\nenter the choice of shape :\n";
	cin>>choice;
	switch(choice)
	{
	case 1: 
	{
		cout<<"\nenter the values of lenght and width :\n";
		cin>>l>>w;
		area(l,w);
		break;
	}
	case 2: 
	{
		cout<<"\nenter the value of radius :\n";
		cin>>r;
		area(r);
		break;
	}
	case 3: 
	{
		cout<<"\nenter the values of height and breadth :\n";
		cin>>h>>b;
		area(h,b);
		break;
	}
    }
}
