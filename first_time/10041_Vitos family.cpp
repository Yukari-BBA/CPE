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
	int time;
	int count;
	int tmp;
	int sum;
	
	vector<int> num;
	
	cin >> time;
	for(int i=0;i<time;i++)
	{
		sum=0;
		num.clear();
		cin >> count;
		for(int j=0;j<count;j++)
		{
			cin >> tmp;
			num.push_back(tmp);
		}
		
		//sort
		for(int j=0;j<num.size();j++)
		{
			for(int k=0;k<num.size();k++)
			{
				if(k>0 and num[k]<num[k-1])
				{
					tmp = num[k-1];
					num[k-1] = num[k];
					num[k] = tmp;
				}
			}
		}
		int tmp = (num.size()+1)/2;
		for(int j=0;j<num.size();j++)
		{
			sum = sum+(num[tmp-1]-num[j]);
//			cout << num[j] << tmp << endl;
		}
		cout << sum <<endl;
		
	}
}
