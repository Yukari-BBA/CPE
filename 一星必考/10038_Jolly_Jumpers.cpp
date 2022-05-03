#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <cctype>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	int len;
	int input;
	int tmp;
	vector<int> num;
	vector<int> sum;
	bool flag=false;
	
	while(cin >> len)
	{
		flag=false;
		num.clear();
		sum.clear();
		//存入數字 
		for(int i=0;i<len;i++)
		{
			cin >>input;
			num.push_back(input);
		}
		//確認輸出 
//		for(int j=0;j<num.size();j++)
//		{
//			cout << num[j]<<endl;
//		}
		
		for(int j=0;j<num.size();j++)
		{
			tmp=0;
			if(j>0)
			{
				tmp=abs(num[j]-num[j-1]);
				sum.push_back(tmp);
			}
		}
		//確認輸出 
//		for(int j=0;j<sum.size();j++)
//		{
//			cout << sum[j]<<endl;
//		}
		for(int i=0;i<sum.size();i++)
		{
			for(int j=0;j<sum.size()-1;j++)
			{
				if(sum[j]>sum[j+1])
				{
					tmp=sum[j+1];
					sum[j+1]=sum[j];
					sum[j]=tmp;
				}
			}
		}
//		for(int j=0;j<sum.size();j++)
//		{
//			cout << sum[j]<<endl;
//		}
		for(int j=0;j<sum.size();j++)
		{
			if(sum[j]!=j+1)
			{
				flag=true;
			}
		}
		

		if(len==0 or len==1)
		{
			cout << "Not jolly" <<endl;
		}
		else if(flag==false)
		{
			cout << "Jolly" << endl;
		}
		else if(flag==true)
		{
			cout << "Not jolly" << endl;
		}
	}
	
} 
