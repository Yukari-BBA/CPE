#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <math.h>
#include <vector>
#include <map> 

using namespace std;

int main()
{
	vector<long long int> num;
	
	num.push_back(1);
	num.push_back(2);
	for(int i=2;i<39;i++)
	{
		num.push_back(num[i-1]+num[i-2]);
	}
//	for(int i=0;i<num.size();i++)
//	{
//		cout << num[i] << endl;
//	}
	vector<int> fib;
	int time;
	cin >> time;
	for(int c=1;c<=time;c++)
	{
		long long int int_num;
		long long int tmp;
		fib.clear();
		cin >> int_num;
		
		tmp=int_num;
		while(tmp>0)
		{
			for(int i=38;i>=0;i--)
			{
				if(tmp >= num[i])
				{
					fib.push_back(1);
					tmp = tmp - num[i];
				}
				else
				{
					fib.push_back(0);
				}
			}
		}
		cout << int_num << " = ";
		bool flag=false;
		for(int i=0;i<fib.size();i++)
		{
			if(flag==false and fib[i]==1)
			{
				cout << fib[i];
				flag = true;
			}
			else if(flag==true)
			{
				cout << fib[i];
			}
		}
		cout << " (fib)"<<endl;
	}


	
}
