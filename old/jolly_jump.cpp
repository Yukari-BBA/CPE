#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	int len=0;
	int input_tmp=0;
	vector<int> num;
	bool flag = false;
	int Subtraction1=0;
	vector<int> Subtraction_num;
	
	while(cin >> len)
	{
		flag = false;
		num.clear();
		Subtraction_num.clear();
		for(int i=0;i<len;i++)
		{
			cin >> input_tmp;
			num.push_back(input_tmp);
		}
		/////////////////////////////////////////
		//sort
//		for(int i=0;i<num.size()-1;i++)
//		{
//			for(int j=0;j<num.size()-i-1;j++)
//			{
//				int tmp=0;
//				if(num[j]>num[j+1])
//				{
//					tmp = num[j+1];
//					num[j+1] = num[j];
//					num[j] = tmp; 
//				}
//			}
//		}
		//////////////////////////////////////
		
//		cout << len <<endl;
//    	for(vector<int>::iterator it=num.begin();it!=num.end();it++)
//    	{
//    		cout << *it<<" ";
//		}
		////////////////////////////////////////
		
		for(int i=0;i<num.size();i++)
		{
			Subtraction1=0;
			if(i>0)
			{
				Subtraction1=num[i]-num[i-1];
				if(Subtraction1<0)
				{
					Subtraction1=num[i-1]-num[i];
				}
				Subtraction_num.push_back(Subtraction1);
			}
		}
//		cout << endl;
//		for(vector<int>::iterator it=Subtraction_num.begin();it!=Subtraction_num.end();it++)
//    	{
//    		cout << *it<<" ";
//		}
		
		for(int i=0;i<Subtraction_num.size()-1;i++)
		{
			for(int j=0;j<Subtraction_num.size()-i-1;j++)
			{
				int tmp=0;
				if(Subtraction_num[j]>Subtraction_num[j+1])
				{
					tmp = Subtraction_num[j+1];
					Subtraction_num[j+1] = Subtraction_num[j];
					Subtraction_num[j] = tmp; 
				}
			}
		}
//		cout << len <<endl;
//    	for(vector<int>::iterator it=Subtraction_num.begin();it!=Subtraction_num.end();it++)
//    	{
//    		cout << *it<<" ";
//		}
//		for(vector<int>::iterator it=num.begin();it!=num.end();it++)
//		{
//			cout<<*it;
//		}




		for(int i=0;i<Subtraction_num.size();i++)
		{
			if(Subtraction_num[i]!=i+1)
			{
				flag = true;
			}
			
		}
		
		
		
		
		
		if(len==0 or len==1)
		{
			cout << "Not jolly" <<endl;
		}
		else if(flag == false)
		{
			cout << "Jolly" <<endl;
			flag = false;
		}
		else if (flag == true)
		{
			cout << "Not jolly" <<endl;
			flag = false;
		}
	}
	
} 
