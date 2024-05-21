/*********************************
 ACM 1008: [NKPC2]三食堂宣传栏
 开头三句一定注意
 #include <iostream>
 using namespace std;
 int main(int)
 还有return 0
 乘法一定记得用*
 不然bad suffix on number
 最后别忘了写完所有函数
*********************************/
#include<iostream>
using namespace std;
int main()
{
	int len,i;
	cin>>len;
	int *p=new int[len];
        for(i=0;i<=len;i++)
	    p[i]=i*9;
	cout<<p[1]<<p[5]<<endl;
	delete p;
	return 0;
}



