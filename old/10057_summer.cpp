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
	int mid_num_count;
	int mid_num_version;
	int mid_left;
	int mid_right;
	
	vector<int> num;
	
	while(cin >> time)
	{
		mid_num_count=0;
		mid_num_version=0;
		mid_left=0;
		mid_right=0;
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
		
		mid_left=num[(time-1)/2];
		mid_right=num[time/2];
		
		mid_num_version = mid_right-mid_left+1;
		
		for(int i=0;i<num.size();i++)
		{
			if(num[i]==mid_left or num[i]==mid_right)
			{
				mid_num_count++;
			}
		}
		
		//1 1 2 2 4 5
		
		//test print
//		for(int i=0;i<num.size();i++)
//		{
//			cout << i << " " << num[i] <<endl;
//		}
		
//		cout << min << " " << mid << " " << mid_num_count << " " << mid_num_version << endl;
		
		cout << mid_left << " " << mid_num_count << " " << mid_num_version << endl;
	
	}
	
	return 0;
}
