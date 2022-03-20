#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>
#include <math.h>

using namespace std;

int main()
{
	string std;
	bool not_first=false;
	int tmp;
	
	while(getline(cin,std))
	{
	
		//print getline
//		cout << std << endl;
		
		if(not_first==true)
		{
			cout << endl;
//			cin.get();
		}
		//////////////////////////////////////////////////////////
		
		//array
		int ascii_num[97]={0};
		int ascii_num_count[97]={0};
		
		
		for(int i=0;i<96;i++)
		{
			ascii_num[i] = i+32;
		}
		
		for(int i=0;i<std.size();i++)
		{
			ascii_num_count[int(std[i])-32] = ascii_num_count[int(std[i])-32] + 1;
		}
		
		
		//////////////////////////////////////////////////////////
		
//		test print
		for(int i=0;i<96;i++)
		{
//			if(ascii_num_count[i]!=0)
//			{
//				cout << ascii_num[i] << " " << ascii_num_count[i] << endl;
//			}
			cout << ascii_num[i] << " " << ascii_num_count[i] << endl;
		}
		
		not_first=true;
	}
	
	return 0;
	
} 
