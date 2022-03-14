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
	vector<int> ascii_num;
	vector<int> ascii_word_count;
	
	while(getline(cin,std))
	{
	
		//print getline
//		cout << std << endl;

		ascii_num.clear();
		ascii_word_count.clear();
		
		if(not_first==true)
		{
			cout << endl;
//			cin.get();
		}
		
//		toupper
//		transform(std.begin(),std.end(),std.begin(),::toupper);
//		cout << std << endl;
		
		for(int i=0;i<std.size();i++)
		{
			flag=false;
//			cout << i << endl;
			for(int j=0;j<ascii_num.size();j++)
			{
				if(std[i]==ascii_num[j])
				{
					flag=true;
					ascii_word_count[j] = ascii_word_count[j] +1;
				}
			}
			if(flag==false)
			{
				ascii_num.push_back(int(std[i]));
				ascii_word_count.push_back(1);
			}
			
		}
		
		for(int i=0;i<ascii_word_count.size()-1;i++)
		{
			for(int j=0;j<ascii_word_count.size()-i-1;j++)
			{
				if(ascii_word_count[j]>ascii_word_count[j+1])
				{
					tmp = ascii_word_count[j];
					ascii_word_count[j] = ascii_word_count[j+1];
					ascii_word_count[j+1] = tmp;
					tmp = ascii_num[j];
					ascii_num[j] = ascii_num[j+1];
					ascii_num[j+1] = tmp;
				}
				else if (ascii_word_count[j]==ascii_word_count[j+1] and ascii_num[j]>ascii_num[j+1])
				{
					tmp = ascii_word_count[j];
					ascii_word_count[j] = ascii_word_count[j+1];
					ascii_word_count[j+1] = tmp;
					tmp = ascii_num[j];
					ascii_num[j] = ascii_num[j+1];
					ascii_num[j+1] = tmp;
				}
			}
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
