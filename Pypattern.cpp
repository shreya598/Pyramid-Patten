/*
Problem Statement : Generate various Pyramid Patterns
Created by : Shreya S. Patil
Date: 26-07-19
*/
#include<iostream>
using namespace std;

void pypattern(int n)
{
	//No.of rows
	for(int i=0;i<n;i++)
	{
		//no.of column
		for(int j=0;j<=i;j++)
		{
			cout<<"*";	
		}
		cout<<endl; //ending line after each row
	}
}
void triangle(int n)
{
	int k=2*n-2;	//no.of spaces
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
			cout<<" ";
		k=k-1;
		for(int j=0;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

void numpy(int n)
{
	int num=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
			cout<<num<< " ";
			
		num=num+1;
		cout<<endl;
	}
	
}
void num2(int n)
{
	int num=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<num<<" ";
			num=num+1;
		}
		cout<<endl;
	}
}

void num3(int n)
{
	int k=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<k;
			if(j!=i)
				cout<<" * ";
			k++;
		}
		cout<<endl;
	}
}
int main()
{
	int n=5;
	cout<<"Pyramid Pattern :\n";
	pypattern(n);
	cout<<"--------------------------";
	cout<<"\nTriangle Pyramid :\n";
	triangle(n);
	cout<<"--------------------------";
	cout<<"\nNumber Pyramid 1:\n";
	numpy(n);
	cout<<"--------------------------";
	cout<<"\nNumber Pyramid 2:\n";
	num2(n);
	cout<<"--------------------------";
	cout<<"\nNumber Pyramid 3 :\n";
	num3(n);
	return 0;
}
