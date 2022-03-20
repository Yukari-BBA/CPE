#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	int time;
	string num1,num2;
	bool flag=false;
	bool flagg=false;
	long long int num1_sum;
	long long int num2_sum;
	long long int tmp;
	int count;
	vector<int> num1_num,num2_num;
	
	cin >> time;
	cin.get();
	
	for(int i=0;i<time;i++)
	{
		flag=true;
		flagg=false;
		getline(cin,num1);
		getline(cin,num2);
		num1_sum=0;
		num2_sum=0;
		num1_num.clear();
		num2_num.clear(); 
		
//		cout << num1 << " " << num2 <<endl;
		
		if(num1[0]==0 or num2[0]==0 or num1.size()<2 or num2.size()<2)
		{
			flag = false;
		}
		
		//number
		if(flag == true)
		{
			stringstream ss;  
			ss << num1;  
			ss >> tmp;
			
			count = 1;
			while(tmp>0)
			{
				num1_sum = num1_sum + tmp%10 * count;
				count = count * 2;
				tmp=tmp/10;
			}
			
			ss.clear();
			ss << num2;  
			ss >> tmp;
			count = 1;
			while(tmp>0)
			{
				num2_sum = num2_sum + tmp%10 * count;
				count = count * 2;
				tmp=tmp/10;
			}
		}
		
		//do thing
		for(int j=1;j<=num1_sum;j++)
		{
//			cout << j <<endl;
			if(num1_sum%j==0)
			{
				num1_num.push_back(j);
			}
		}
		for(int j=1;j<=num2_sum;j++)
		{
			if(num2_sum%j==0)
			{
				num2_num.push_back(j);
			}
		}
		
		for(int j=1;j<num1_num.size();j++)
		{
			for(int k=1;k<num2_num.size();k++)
			{
				if(num1_num[j]==num2_num[k])
				{
					flagg=true;
				}
			}
		}
		if(flagg==false and flag==true)
		{
			flag = false;
		}
		
		
		
		//test print
//		cout << num1_sum << " " << num2_sum <<endl;
		
		cout << "Pair #"<<i+1<<": ";
		if(flag==false)
		{
			cout << "Love is not all you need!" << endl;
		}
		else if(flag=true)
		{
			cout << "All you need is love!" << endl;
		}
		
	}
}
