/*********************************
 ACM 1008: [NKPC2]��ʳ��������
 ��ͷ����һ��ע��
 #include <iostream>
 using namespace std;
 int main(int)
 ����return 0
 �˷�һ���ǵ���*
 ��Ȼbad suffix on number
 ��������д�����к���
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



