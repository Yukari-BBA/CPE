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
	bool flag=false;
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
		
		int ascii_num[97]={0},ascii_word_count[97]={0};
		
		for(i =0;i<96;i++)//產生ASCII的值 
		{
			ascii_num[i]=i+32;
		}
		
		for(i =0;i<std.length();i++)//計算輸入字串的ASCII出現次數 
		{
			ascii_word_count[std[i]-32]++;
		}
		
		
		
//		test print
		for(int i=0;i<ascii_num.size();i++)
		{
			cout << ascii_num[i] << " " << ascii_word_count[i] <<endl;
		}
		
		not_first=true;
	}
	
	return 0;
	
} 
