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
bool flag = false;

int loop(string num ,int count)
{
	long long int tmp=0;
	for(int i=0;i<num.size();i++)
	{
		tmp = tmp + int(num[i])-'0';
//		cout << tmp <<endl;
	}
	count = count +1;
//	cout <<"cd"<< tmp <<endl;
	if(tmp==9)
	{
		flag = true;
		return count;
	}
	else if(tmp<9)
	{
		return 0;
	}
	else
	{
		stringstream ss;
		ss << tmp;
		ss >> num;
		return loop(num,count);
	}
//	cout << count <<endl;
}

int main()
{
	string num;
	while(cin >> num and num!="0")
	{
		flag = false;
		int count=0;
		
		int ans = loop(num,count);
		
		if(flag==true)
		{
			cout << num << " is a multiple of 9 and has 9-degree "<< ans << "." <<endl;
		}
		else
		{
			cout << num << " is not a multiple of 9." <<endl;
		}
	}
	
	
	
} 
