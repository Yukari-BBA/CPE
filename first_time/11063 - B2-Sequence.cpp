#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <string>
#include <math.h> 
#include <map>
#include <sstream>

using namespace std;

int main()
{
	int time;
	bool flag=false;
	vector<int> tmp_num;
	vector<int> ams_num;
	int count=1;
	
	while(cin >> time)
	{
		flag=false;
		int tmp;
		tmp_num.clear();
		ams_num.clear();
		
//		for(int i=0;i<time;i++)
//		{
//			cin >> tmp;
//			num.push_back(tmp);
//		}
//		for(int i=0;i<num.size()-1;i++)
//		{
//			if(num[i]>num[i+1])
//			{
//				flag=true;
//			}
//			
//		}


		for(int i=0;i<time;i++)
		{
			cin >> tmp;
			tmp_num.push_back(tmp);
		}
//		test cout
//		for(int i=0;i<tmp_num.size();i++)
//		{
//			cout << i << " " << tmp_num[i] << endl;
//		}


		for(int i=0;i<tmp_num.size();i++)
		{
			for(int j=i;j<tmp_num.size();j++)
			{
				ams_num.push_back(tmp_num[i]+tmp_num[j]);
			}
		}
		
//		for(int i=0;i<ams_num.size();i++)
//		{
//			cout << ams_num[i] << endl;
//		}
		sort(ams_num.begin(),ams_num.end());
		for(int i=0;i<ams_num.size();i++)
		{
			if(ams_num[i]==ams_num[i+1])
			{
				flag = true;
			} 
		}
		
		if(flag==false)
		{
			cout << "Case #" << count << ": It is a B2-Sequence."<<endl; 
		}
		else if(flag==true)
		{
			cout << "Case #" << count << ": It is not a B2-Sequence."<<endl; 
		}
		count ++;
	}
	
	
}
