#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <cctype>
#include <math.h>
#include <vector> 

using namespace std;

/*
2
14
3
3
4
8
100
4
12
15
25
40
*/
int main()
{
	int time;
	int days;
	int num_len;
	int num;
	vector<int> nums;
	bool flag=false;
	int count;
	int non1;
	int non2;
	
	cin >>time;
	
	for(int i=0;i<time;i++)
	{
		count=0;
		non1=6;
		non2=7;
		nums.clear();
		cin >>days; 
		cin >>num_len;
		for(int j=0;j<num_len;j++)
		{
			cin >> num;
			nums.push_back(num);
		}
//		for(int j=0;j<nums.size();j++)
//		{
//			cout << nums[j]<<endl;
//		}
		for(int j=1;j<=days;j++)
		{
			flag = false;
			for(int k=0;k<nums.size();k++)
			{
				if(j%nums[k]==0 and j!=non1 and j!=non2)
				{
					flag=true;
				}
			}
			if(j==non1)
			{
				non1=non1+7;
			}
			else if(j==non2)
			{
				non2=non2+7;
			}
			if(flag==true)
			{
				count++;
			}
//			cout << "day " << j << flag <<endl;
		}

		
		cout << count << endl; 
	}
}
