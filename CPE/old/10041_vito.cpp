#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>


using namespace std;

int main()
{
	//號碼 
	vector<int> num;
	int main_house;
	//幾個輸入 
	int time=0;
	int len=0;
	
	int tmp=0;
	int sum=0;
	
	
	cin >> time;
	for(int i=0;i<time;i++)
	{
		cin >>len;
		num.clear();
		sum=0;
		for(int j=0;j<len;j++)
		{
			tmp =0;
			cin >>tmp;
			num.push_back(tmp);
		}
		
		//	sort(minus.begin(), minus.end()); // 由小到大排序
		sort(num.begin(),num.end());
		
		
		int count = num.size();
//		cout << count;
		tmp = 0;
		int left=0;
		int right=0;
		if(count%2==0)
		{
			tmp = count/2;
//			tmp = count/2+1;
		}
		else if(count%2==1)
		{
			tmp = count/2+1;
		}
//		cout <<count<<"dasdsadas"<<tmp <<endl;
		for(int i=0;i<num.size();i++)
		{
			if(num[i]>num[tmp-1])
			{
				sum = sum + num[i]-num[tmp-1];
			}
			else if(num[i]<num[tmp])
			{
				sum = sum + num[tmp-1] - num[i];
			}
		}
		cout <<sum<<endl;
		
		
		
		
		
		
		
	}
	
	
	
	
} 
