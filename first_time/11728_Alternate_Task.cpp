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
	int num;
	int count=0;
	
	int sum=0;
	bool flag=false;
	vector<int> num_sum;
	
	for(int i=1;i<=1000;i++)
	{
		sum=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		num_sum.push_back(sum);
	}
	
	
//	for(int i=0;i<num_sum.size();i++)
//	{
//		cout << num_sum[i]<<endl;
//	}
	
	while(cin >> num and num!=0)
	{
		flag =false;
		count++;
		for(int i=num_sum.size();i>=0;i--)
		{
			if(num_sum[i]==num and flag==false)
			{
				flag =true;
				cout << "Case "<< count << ": "<< i+1 <<endl;
			}
		}
		if(flag==false)
		{
			cout << "Case "<< count << ": "<< "-1" <<endl; 
		}
	}
}
