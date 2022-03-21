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
#include <sstream>

using namespace std;

int main()
{
	string num;
	while(cin >> num and num!="0")
	{
		int sum=0;
		for(int i=0;i<num.size();i++)
		{
			sum = sum + int(num[i])-'0';
		}
		while(sum >=10)
		{
			stringstream ss;
			ss << sum;
			ss >> num;
			sum = 0;
			for(int i=0;i<num.size();i++)
			{
				sum = sum + int(num[i])-'0';
			}
		}
		
		cout << sum << endl;
	}
	
}
