#include<iostream>
#include<string>
using namespace std;
int strlen(string a)//���� �ó��ַ���a�ĳ���
{
	int i=0;
	while(a[i]!=NULL)//����string�ַ��ĺ�һλ��NULL
	{
		i++;
	}
	return i;
}
int main()
{
	struct students
	{
		string name;
		int ID;
		int score;
	} data[20],mid;
	bool quit1=true,quit2=true,out;
	char yorn1,yorn2;
	string search;
	int i=0,function,same;
	while(quit1)//quit1Ϊ��ʱ���� ��ʼֵΪ��
	{
		quit2=true;
		cout<<"��ѡ���� ��1.¼��ѧ����Ϣ 2.��ѯѧ����Ϣ����";//ѯ���û�
		cin>>function;//���빦��
		switch(function)
		{
		case 1://functionΪ1ʱ ¼��ѧ����Ϣ
			{g
				while(quit2)//ͬ��
				{
					cout<<"������";//����data[i]
					cin>>data[i].name;
					cout<<"�ɼ���";
					cin>>data[i].score;
					data[i].ID=i+1;
					i++;
					cout<<"�Ƿ�������룿 y/n:";//ѯ���û�
					cin>>yorn2;
					switch(yorn2)//ѡ��Y ���� N quit2Ϊ�� ��һ��ѭ����ֹ ������������
					{
					case'y':break;
					case'n':
						{
							quit2=false;							
						}
						break;
					default:
						{
							cout<<"�������";
							return 0;
						}
					}
				}
				for(int m=0;m<=i-1;m++)//����
				{
					for(int n=m+1;n<=i-1;n++)
					{
						if(data[m].score<data[n].score)
						{
							mid=data[m]; data[m]=data[n]; data[n]=mid;
						}
					}
				}

				cout<<"��¼���ѧ���б�ѧ���Զ����ɣ�"<<endl;
				cout<<"ѧ��   ����   �ɼ�"<<endl;
				for(int j=0;j<=i-1;j++)//�������ѧ����Ϣ
					cout<<data[j].ID<<"  "<<data[j].name<<"  "<<data[j].score<<endl;															
			}
			break;
		case 2://ѡ��2 ��ѯѧ����Ϣ
			{
				cout<<"������ѧ��������";
				cin>>search;	
				cout<<"ѧ��   ����   �ɼ�"<<endl;
				for(int j=0;j<=i-1;j++)//������search���бȽϵ��ַ���
				{					
					if(strlen(search)<=strlen(data[j].name))//��search����С�����Ƚϵ��ַ���ʱ ������һ��
					{
						out=false;//��ʾ�Ƿ���� ÿ�αȽ�ǰ����Ϊ��
						for(int k=0;k<=strlen(data[j].name)-strlen(search);k++)//���ƶ�ĳ�ַ������м��αȽ�
						{
							same=0;//��ʾ��ͬ�ַ��ĸ��� ÿ�αȽ�ǰ����Ϊ0
							for(int l=0;l<=strlen(search)-1;l++)//��һ��ÿ���ַ��Ƚ�
							{
								if(search[l]==data[j].name[k+l])
									same++;//����ͬ���ַ�same��һ
								if(same==strlen(search))//ֻ�е����ж���ͬsame�Ż����search�ĳ���	
								{
									cout<<data[j].ID<<"  "<<data[j].name<<"  "<<data[j].score<<endl;
									out=true;//������ outΪ�� you
								}
							}
							if(out==true)//��������������ѭ�� ����ĳ���ַ����ظ�����
								break;
						}
					}
					
				}							
			}
			break;
		default:
			{
				cout<<"�������";
				return 0;
			}
		}
		cout<<"�Ƿ����ʹ�ã� y/n:";//ͬ��
		cin>>yorn1;
		switch(yorn1)
		{
		case'y':break;
		case'n':
			{
				quit1=false;
			}
			break;
		default:
			{
				cout<<"�������";
				return 0;
			}
		}
	}
}


	
