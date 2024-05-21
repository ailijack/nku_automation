#include <iostream>
using namespace std;
void ChxToy(char n[],int x,int y);
	void ChxToy(char n[],int x,int y){
		char ch16Table[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		int value=0;
		for(int i=0;n[i]!=0;i++)
		{
			for(int j=0;j<x;j++)
			{
				if(n[i]==ch16Table[j])
					value=value*x+j;
			}
		}
		int k=value;
		int a[50];
		for(int i=0;k!=0;i++)
		{
			a[i]=k%x;
			k/=x;
		}
		cout<<n<<"("<<x<<")=";
		for(i--;i>=0;i--)
			cout<<ch16Table[a[i]];
		cout<<"("<<y<<")"<<endl;
	}
	void main()
	{
		int x,y;
		char n[80];
		cout<<"input x number:";
		cin>>n;
		cout<<"input x:";
		cin>>x;
		cout<<"input y:";
		cin>>y;
		ChxToy(n,x,y);
	}
