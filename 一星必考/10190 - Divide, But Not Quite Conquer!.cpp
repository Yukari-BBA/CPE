#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	int num1,num2;
	int tmp;
	bool flag=false;
	string error="Boring!";
	vector<int> num;
	
	while(cin >> num1 >> num2)
	{
		flag=false;
		num.clear();
		num.push_back(num1);
		if(num2==0)
		{
			flag=true;
		}
		while(num1>1 and flag==false)
		{
			if(num1%num2==0)
			{
				num.push_back(num1/num2);
			}
			else
			{
				flag=true;
			}
			num1=num1/num2;
		}
//		num.push_back(1);
		
		if(flag==false)
		{
			for(int i=0;i<num.size();i++)
			{
				if(i==num.size()-1)
				{
					cout << num[i] << endl;
				}
				else
				{
					cout << num[i] << " ";
				}
			}
		}
		
		else if(flag==true)
		{
			cout << error << endl;
		}
		
	}
	
	
}
