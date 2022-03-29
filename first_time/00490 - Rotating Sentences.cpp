#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <math.h>
#include <vector>
#include <map> 

using namespace std;

int main()
{
	vector<string> std1;
	string tmp;
	std1.clear();
	int max=0;
	while(getline(cin,tmp))
	{
		std1.push_back(tmp);
		if(tmp.size()>max)
		{
			max = tmp.size();
		}
//		cout << std1[0][0] << max << endl;
	}
	for(int i=0;i<max;i++)
	{
		for(int j=std1.size()-1;j>=0;j--)
		{
			if (i >= std1[j].size()) 
			{	
				cout << " ";
			}
			else
			{
				cout << std1[j][i];
			}
		}
		cout << endl;
	}
	
}
