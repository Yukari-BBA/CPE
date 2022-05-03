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

using namespace std;

int main()
{
	string std1,std2;
	int word_count[26]={0};
	char word[26];
	int max;
	bool flag;
	
	vector<char> uni_word;
	
	while(getline(cin,std1),getline(cin,std2))
	{
		max = 0;
		uni_word.clear();
		
		for(int i=0;i<26;i++)
		{
			word[i]=97+i;
			word_count[i]=0;
		}
		
		for(int i=0;i<std1.size();i++)
		{
			for(int j=0;j<std2.size();j++)
			{
				if(std1[i]==std2[j])
				{
					uni_word.push_back(std1[i]);
					std2.erase(j,1);
					break;
				}
			}
		}
		
		sort(uni_word.begin(),uni_word.end());
		
		for(int i=0;i<uni_word.size();i++)
		{
			cout << uni_word[i];
		}
		
		cout << endl;
		
//		for(int i=0;i<26;i++)
//		{
//			cout << word[i] << " " << word_count[i]<<endl;
//		}
//		cout << std1 << " " << std2 <<endl;
		
	}
	
	
}
