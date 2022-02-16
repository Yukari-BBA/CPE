#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
	int len=0;
	vector<int> num;
	int tmp=0;
	int min=0;
	int min_num=0;
	int type=0;
	
	while(cin >> len)
	{
		num.clear();
		tmp=0;
		min=0;
		min_num=0;
		type = 1;
		
		for(int i=0;i<len;i++)
		{
			cin >> tmp;
			num.push_back(tmp);
		}
//		for(vector<int>::iterator it=num.begin();it!=num.end();it++)
//		{
//			cout << *it << " ";
//		}
		sort(num.begin(),num.end());
//		for(vector<int>::iterator it=num.begin();it!=num.end();it++)
//		{
//			cout << *it << " ";
//		}
		
		if(num.size()<1)
		{
			min = num[0];
		}
		else if(num.size()>1)
		{
			min = num[(num.size()-1)/2];
		}
		for(int i=0;i<num.size();i++)
		{
			if(num[i]==min)
			{
				min_num++;
			}
		}
		if(num.size()>1 and num[(num.size()-1)/2]!=num[num.size()/2])
		{
//			min_num++;
			type ++;
			for(int i=0;i<num.size();i++)
			{
				if(num[i]==num[num.size()/2])
				{
					min_num++;
				}
			}
		}
		
		cout << min << " "<< min_num <<" "<< (num[len>>1] - min + 1)<<endl;
//		(num[len>>1]-num[(num.size()-1)/2]+1)
		
		
	}
}
