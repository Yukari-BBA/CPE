#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int time=0;
	int day=0;
	int pol_num=0;
	vector<int> pol;
	bool rest=false;
	bool done=false;
	int count=0;
	
	cin >> time;
	for(int i=0;i<time;i++)
	{
		int fail1=6,fail2=7;
		pol.clear();
		rest = false;
		done=false;
		count = 0;
		
		cin >> day;
		cin >> pol_num;
		
		for(int j=0;j<pol_num;j++)
		{
			int tmp=0;
			cin >> tmp;
			pol.push_back(tmp);
		}
		
//		for(vector<int>::iterator it=pol.begin();it!=pol.end();it++)
//		{
//			cout << *it << " ";
//		}


		for(int i=0;i<day;i++)
		{
			done=false;
			rest=false;
			for(int j=0;j<pol.size();j++)
			{
				if((i+1)%pol[j]==0)
				{
					rest =true;
//					cout<<"dsadsa" << i+1<<endl;
				}
//				if((i+1)==fail1)
//				{
//					rest =false;
//					fail1 = fail1 +7;
//				}
//				if((i+1)==fail2)
//				{
//					rest =false;
//					fail2 = fail2 +7;
//				}
//				cout <<fail1<<endl;

				if((i+1)%7==0 or (i+1)%7==6)
				{
					rest =false;
				}


			}
//			cout <<fail1<<endl;
			if(rest==true and done==false)
			{
//				cout<<"count" << i+1<<endl;
				count++;
				done=true;
			}
		}
		
		cout << count <<endl;

		
	}
	
	
}
