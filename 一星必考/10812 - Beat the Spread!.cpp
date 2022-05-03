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
	int time;
	
	cin >> time;
	
	while(time--)
	{
		int num1,num2;
		int sum;
		int abs;
		bool flag=false;
		
		cin >> sum >> abs;
		
		int tmp = sum+abs;
		if(tmp%2==0)
		{
			num1 = tmp /2;
		}
		else
		{
			flag=true;
		}
		num2=sum-num1;
		if(num2<0)
		{
			flag=true;
		}
		
		if(flag==false)
		{
			cout << num1 << " " << num2 <<endl;
		}
		else
		{
			cout << "impossible" << endl;
		}
		
		
		
		
	}
	
	
}
