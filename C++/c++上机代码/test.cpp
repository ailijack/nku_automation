#include <string.h>
#include <math.h>
#include <fstream.h>
#include <iostream.h>

void FindChar(char *str)
{
	bool isFind = false;
	int position=0;

	while(str[position] != '\0')
	{
		if(str[position] == 'c')
		{
			isFind = true;
			cout<<position<<" ";
		}

		position++;
	}

	if(!isFind)
	{
		cout<<"No match found! ";
	}

	cout<<endl;
}

class Client
{
private:
	char m_name[32];
	int m_age;
	int m_type;

public:
	Client()
	{
		m_name[0] = 0;
		m_age = -1;
		m_type = 0;
	}

	Client(char *name, int age, int type)
	{
		strcpy(m_name, name);
		m_age = age;
		m_type = type;
	}

	void SetName(char* pName)
	{
		strcpy(m_name, pName);
	}

	char* GetName()
	{
		return m_name;
	}

	void SetType(int type)
	{
		m_type = type;
	}

	int GetType()
	{
		return m_type;
	}
};

void display(Client c)
{
	cout<<"Name: "<<c.GetName()<<", Type: "<<c.GetType()<<endl;

	ofstream of;
	of.open("Info.bin");
	if(!of)	return;

	of<<"Name: "<<c.GetName()<<", Type: "<<c.GetType()<<endl;

	of.close();
}

#define PI 3.1415

class Shape
{
public:
	virtual double Area()=0;
	virtual double Perim()=0;
};

class Circle: public Shape
{
	double rad;
public:
	Circle(double r)
	{
		rad = r;
	}

	double Area()
	{
		return rad * rad * PI;
	}

	double Perim()
	{
		return 2 * rad * PI;
	}

	double GetR()
	{
		return rad;
	}
	
};

class Rectangle: public Shape
{
	double length, width;

public:
	Rectangle(double l, double w)
	{
		width = w;
		length = l;
	}

	double Area()
	{
		return width * length;
	}

	double Perim()
	{
		return width * 2 + length * 2;
	}

	bool operator < (Circle &c)
	{
		double x; // �Խ���/2
		x = sqrt(width*width + length*length)/2;

		return x <= c.GetR();
	}
};


void main()
{
	FindChar("12wcr9bbpp");
	FindChar("uoia80werl");
	FindChar("cpcmx69c8");

	Client c("xiaoming", 12, 2);
	display(c);

	int mode;

	cout<<"��ѡ��ģʽ(1������ģʽ|2���Ƚ�ģʽ):";
	cin>>mode;
	if(mode > 2 || mode < 1)
	{
		cout<<"����ģʽ"<<endl;
		return ;
	}

	if(mode == 1)
	{
		cout<<"�ֱ�������εĳ�����Բ�İ뾶��";
		double l, w, r;
		cin>>l>>w>>r;

		Rectangle rect(l, w);
		Circle circ(r);

		Shape *ps;
		ps = &rect;
		cout<<"���������"<<ps->Area()<<"���ܳ���"<<ps->Perim()<<endl;

		ps = &circ;
		cout<<"Բ�����"<<ps->Area()<<"���ܳ���"<<ps->Perim()<<endl;
	}
	else
	{
		cout<<"�ֱ�������εĳ�����Բ�İ뾶��";
		double l, w, r;
		cin>>l>>w>>r;

		Rectangle rect(l, w);
		Circle circ(r);

		if(rect < circ)
		//R_obj��C_obj�ֱ�ΪRectangle������Circle�����
			cout<<"�����ܹ�ȫ������Բ���ڲ�"<<endl;
		else
			cout<<"���β��ܹ�ȫ������Բ���ڲ�"<<endl;

	}
}