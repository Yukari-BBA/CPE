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
	long long int num;
	string number;
	long long int tmp;
	string std_tmp;
	int count;
	int ans;
	
	while(cin >>num and num!=0)
	{
		count = 0;
		tmp = num;
		ans = 0;
		number.clear();
		
		while(tmp>0)
		{
			stringstream ss;
			ss << tmp%2;
			ss >> std_tmp;
			number.insert(count,std_tmp);
			
			tmp=tmp/2;
		}
		
//		cout << number <<endl;
		for(int i=0;i<number.size();i++)
		{
			if(number[i]=='1')
			{
				ans++;
			}
		}
		
//		The parity of 1 is 1 (mod 2).
		cout << "The parity of " << number << " is " << ans << " (mod 2)." <<endl;
		
	}
	
	
	
}
