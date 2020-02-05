#include<bits/stdc++.h>
using namespace std;
int sum;//总额 
char var[10],ini[10],oper[100];//变量，初始化 operation 运算
int trans(char str[])
{
	if(strcmp("零",str)==0)return 0;
	if(strcmp("一",str)==0)return 1;
	if(strcmp("二",str)==0)return 2;
	if(strcmp("三",str)==0)return 3;
	if(strcmp("四",str)==0)return 4;
	if(strcmp("五",str)==0)return 5;
	if(strcmp("六",str)==0)return 6;
	if(strcmp("七",str)==0)return 7;
	if(strcmp("八",str)==0)return 8;
	if(strcmp("九",str)==0)return 9;
	if(strcmp("十",str)==0)return 10;
} 
int main()
{
	char s[10];
	for(int i=1;i<=5;i++)//测试五个数据
	{
		gets(s);
		cout<<trans(s)<<endl; 
	} 
	return 0; 
} 
