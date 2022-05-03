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
	bool flag = false;
	long long long num;
	while(cin >> num)
	{
		int count=0;
		int nine=9;
		long long int tmp=num;
		flag = false;
		
		while(tmp>0)
		{
			if(tmp%9==0)
			{
				tmp=tmp/9;
				count ++;
				flag=true;
			}
			else
			{
				break;
			}
		}
		if(flag==true)
		{
			cout << num << " is a multiple of 9 and has 9-degree "<< count << "." <<endl;
		}
		else
		{
			cout << num << " is not a multiple of 9." <<endl;
		}
	}
	
	
	
} 
