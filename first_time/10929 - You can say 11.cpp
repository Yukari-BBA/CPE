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
	bool flag=false;
	while(cin >> num and num!="0")
	{
		//°¸¼Æ 
		int even=0;
		//©_¼Æ 
		int odd=0;
		flag=false;
		
		
		
		for(int i=0;i<num.size();i++)
		{
			if(i%2==0 or i==0)
			{
				even = even +  int(num[i])-'0';
			}
			else
			{
				odd = odd +  int(num[i])-'0';
			}
//			cout << even << " " << odd <<endl;
		}
		
		if(even%11==odd%11)
		{
			flag=true;
		}
		
		if(flag==true)
		{
			cout << num << " is a multiple of 11." <<endl;
		}
		else
		{
			cout << num << " is not a multiple of 11." <<endl;
		}
		
		
	}
	
	
}
