#include<iostream>
#include<string>
using namespace std;
int strlen(string a)//函数 得出字符串a的长度
{
	int i=0;
	while(a[i]!=NULL)//利用string字符的后一位是NULL
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
	while(quit1)//quit1为真时继续 初始值为真
	{
		quit2=true;
		cout<<"请选择功能 （1.录入学生信息 2.查询学生信息）：";//询问用户
		cin>>function;//输入功能
		switch(function)
		{
		case 1://function为1时 录入学生信息
			{g
				while(quit2)//同上
				{
					cout<<"姓名：";//输入data[i]
					cin>>data[i].name;
					cout<<"成绩：";
					cin>>data[i].score;
					data[i].ID=i+1;
					i++;
					cout<<"是否继续输入？ y/n:";//询问用户
					cin>>yorn2;
					switch(yorn2)//选择Y 继续 N quit2为假 下一次循环终止 输入其他报错
					{
					case'y':break;
					case'n':
						{
							quit2=false;							
						}
						break;
					default:
						{
							cout<<"输入错误！";
							return 0;
						}
					}
				}
				for(int m=0;m<=i-1;m++)//排序
				{
					for(int n=m+1;n<=i-1;n++)
					{
						if(data[m].score<data[n].score)
						{
							mid=data[m]; data[m]=data[n]; data[n]=mid;
						}
					}
				}

				cout<<"已录入的学生列表（学号自动生成）"<<endl;
				cout<<"学号   姓名   成绩"<<endl;
				for(int j=0;j<=i-1;j++)//依次输出学生信息
					cout<<data[j].ID<<"  "<<data[j].name<<"  "<<data[j].score<<endl;															
			}
			break;
		case 2://选择2 查询学生信息
			{
				cout<<"请输入学生姓名：";
				cin>>search;	
				cout<<"学号   姓名   成绩"<<endl;
				for(int j=0;j<=i-1;j++)//控制与search进行比较的字符串
				{					
					if(strlen(search)<=strlen(data[j].name))//当search长度小于所比较的字符串时 进行下一步
					{
						out=false;//表示是否输出 每次比较前设置为否
						for(int k=0;k<=strlen(data[j].name)-strlen(search);k++)//控制对某字符串进行几次比较
						{
							same=0;//表示相同字符的个数 每次比较前设置为0
							for(int l=0;l<=strlen(search)-1;l++)//逐一对每个字符比较
							{
								if(search[l]==data[j].name[k+l])
									same++;//有相同的字符same加一
								if(same==strlen(search))//只有当所有都相同same才会等于search的长度	
								{
									cout<<data[j].ID<<"  "<<data[j].name<<"  "<<data[j].score<<endl;
									out=true;//输出完成 out为真 you
								}
							}
							if(out==true)//输出过就跳出这层循环 避免某个字符串重复出现
								break;
						}
					}
					
				}							
			}
			break;
		default:
			{
				cout<<"输入错误！";
				return 0;
			}
		}
		cout<<"是否继续使用？ y/n:";//同上
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
				cout<<"输入错误！";
				return 0;
			}
		}
	}
}


	
