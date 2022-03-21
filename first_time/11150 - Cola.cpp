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
	int num;
	bool flag=false;
	int count;
	while(cin >>num)
	{
		flag=false;
		count = 0;
		
//		if(num%3==2)
//		{
//			num=num+1;
//			flag=true;
//		}
		
//		while(num>0)
//		{
//			count = count + num;
//			num=num/3;
//		}
//		if(flag == true)
//		{
//			count --;
//		}
		
		count = num*3/2;
		cout << count <<endl;
		
	}
	
}
