#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <string>
#include <math.h>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
	int time;
	int tmp;
	int min;
	bool flag=false;
	int mid_num_count;
	int mid_num_version;
	int mid;
	
	vector<int> num;
	
//	µL­­Åª¤J 
	while(cin >> time)
	{
		mid_num_count=0;
		mid_num_version=0;
		mid=0;
		min=0;
		num.clear();
		for(int i=0;i<time;i++)
		{
			cin >> tmp;
			num.push_back(tmp);
		}
		
		//sort
		for(int i=0;i<num.size()-1;i++)
		{
			for(int j=0;j<num.size()-1-i;j++)
			{
				if(num[j]>num[j+1])
				{
					tmp=num[j];
					num[j]=num[j+1];
					num[j+1]=tmp;
				} 
			}
		}
		
		min = num[0];
		
		if((num.size()+1)%2==0)
		{
			mid=num[(num.size()+1)/2-1];
		}
		for(int i=0;i<num.size();i++)
		{
			if(mid==num[i])
			{
				mid_num_count++;
			}
		}
		
		
		//1 1 2 2 4 5
		
		//test print
		for(int i=0;i<num.size();i++)
		{
			cout << i << " " << num[i] <<endl;
		}
		
//		cout << min << " " << mid_num_count << endl;
		
		cout << min << " " << mid << " " << mid_num_count << endl;
		
		
	}
}
