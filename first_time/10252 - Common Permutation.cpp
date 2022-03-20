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
	vector<char> uni_word;
	int max;
	bool flag;
	
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
					flag = false;
					for(int k=0;k<uni_word.size();k++)
					{
						if(uni_word[k]==std1[i])
						{
							flag =true;
						}
					}
					if(flag == false)
					{
						uni_word.push_back(std1[i]);
					}
				}
			}
		}
		for(int i=0;i<uni_word.size();i++)
		{
			for(int j=0;j<26;j++)
			{
				if(uni_word[i]==word[j])
				{
					word_count[j]++;
				}
			}
		}
		
		for(int i=26;i>0;i--)
		{
			for(int j=0;j<26;j++)
			{
				if(word_count[j]==i)
				{
					cout << word[j];
				}
			}
		}
		cout << endl;
		
//		for(int i=0;i<26;i++)
//		{
//			cout << word[i] << " " << word_count[i]<<endl;
//		}
//		cout << std1 << " " << std2 <<endl;
		
	}
	
	
}
