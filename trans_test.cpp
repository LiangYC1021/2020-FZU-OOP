#include<bits/stdc++.h>
using namespace std;
int sum;//�ܶ� 
char var[10],ini[10],oper[100];//��������ʼ�� operation ����
int trans(char str[])
{
	if(strcmp("��",str)==0)return 0;
	if(strcmp("һ",str)==0)return 1;
	if(strcmp("��",str)==0)return 2;
	if(strcmp("��",str)==0)return 3;
	if(strcmp("��",str)==0)return 4;
	if(strcmp("��",str)==0)return 5;
	if(strcmp("��",str)==0)return 6;
	if(strcmp("��",str)==0)return 7;
	if(strcmp("��",str)==0)return 8;
	if(strcmp("��",str)==0)return 9;
	if(strcmp("ʮ",str)==0)return 10;
} 
int main()
{
	char s[10];
	for(int i=1;i<=5;i++)//�����������
	{
		gets(s);
		cout<<trans(s)<<endl; 
	} 
	return 0; 
} 
