#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <math.h>
#include <cctype>

using namespace std;

int main()
{
	int time;
	int input_num;
	int tmp1;
	int tmp2;
	int sum1;
	int sum2;
	int hex_num;
	int hex_count;
	vector<int> num;
	
	cin >> time;
	
	for(int i=0;i<time;i++)
	{
		//ªì©l¤Æ 
		input_num=0;
		tmp1=0;
		tmp2=0;
		sum1=0;
		sum2=0;
		hex_num=0;
		hex_count=16;
		num.clear();
		
		cin >>input_num;
		tmp1 = input_num;
//		cout << num <<endl;
		while(tmp1>0)
		{
			tmp2 = tmp1%2;
			num.push_back(tmp2);
			tmp1=tmp1/2;
			if(tmp2==1)
			{
				sum1=sum1+1;
			}
		}
		tmp1 = input_num;
		while(tmp1>0)
		{
			hex_num=hex_num+tmp1%10*hex_count;
			tmp1=tmp1/10;
			hex_count=hex_count*16;
		}
		while(hex_num>0)
		{
			tmp2 = hex_num%2;
			hex_num=hex_num/2;
			if(tmp2==1)
			{
				sum2=sum2+1;
			}
		}
		
		
		cout <<sum1 <<" " <<sum2<<endl;;
	}
	
} 
