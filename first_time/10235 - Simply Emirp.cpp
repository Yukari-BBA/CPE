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
	int num;
	bool flag1,flag2;
	
	while(cin >> num)
	{
		flag1 = true; 
		flag2 = true;
		
//		if primp or not
		for(int i=2;i<=sqrt(double(num));i++)
		{
			if(num % i ==0)
			{
				flag1 = false;
				break;
			}
		}
		
//		if emirp or not 
		if(flag1 == true)
		{
			//data
			int num_tmp;
			int rev_num=0;
			num_tmp=num;
			
			//reverse
			while(num_tmp>0)
			{
				rev_num = rev_num * 10 + num_tmp %10 ;
				num_tmp = num_tmp / 10;
			}
			//test
//			cout << rev_num << endl;

			if(rev_num == num)
			{
				flag2=false;
			}
			
			else
			{
				// is emirp or not
				for(int i=2;i<=sqrt(double(rev_num));i++)
				{
					if(rev_num % i ==0)
					{
						flag2=false;
						break;
					}
				}
			}
			
		}
		
		
		
		
		if(flag1 == true and flag2 == true)
		{
			cout << num << " is emirp." << endl;
		}
		else if(flag1 == true)
		{
			cout << num << " is prime." << endl;
		}
		else
		{
			cout << num << " is not prime." << endl;
		}
	}
	
}
