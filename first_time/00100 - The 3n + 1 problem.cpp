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
	long long int num1,num2;
	while(cin >> num1 >> num2)
	{
		long long int sum;
		long long int count=0;
		long long int max=0;
		long long int tmp;
		long long int big;
		long long int small;
		if(num2<num1)
		{
			big=num1;
			small=num2;
		}
		else
		{
			big=num2;
			small=num1;
		}
		for(long long int i=big;i>=small;i--)
		{
			tmp = i;
			count = 1;
			while(tmp!=1)
			{
				if(tmp%2==1)
				{
					tmp=tmp*3+1;
					count++;
				}
				else if(tmp%2==0)
				{
					tmp=tmp/2;
					count++;
				}
			}
			
			if(count>max)
			{
				max=count;
			}
		}
		
		cout << num1 << " " << num2 << " " << max <<endl;
		
	}
}
