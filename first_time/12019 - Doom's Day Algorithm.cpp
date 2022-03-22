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
	/*
	Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.
	*/
	string word[7]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
	
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	int time;
	cin >> time;
	while(time--)
	{
		int month,day;
		int sum;
		int tmp;
		cin >> month >> day;
		sum = 0;
		if(month!=1)
		{
			tmp = month-1;
			for(int i=0;i<tmp;i++)
			{
				sum = sum + days[i];
			}
			sum +=day;
		}
		else
		{
			sum = day;
		}
//		cout << sum <<endl;
		
		if(sum%7==0)
		{
			cout << word[0] << endl;
		}
		else if(sum%7==1)
		{
			cout << word[1] << endl;
		}
		else if(sum%7==2)
		{
			cout << word[2] << endl;
		}
		else if(sum%7==3)
		{
			cout << word[3] << endl;
		}
		else if(sum%7==4)
		{
			cout << word[4] << endl;
		}
		else if(sum%7==5)
		{
			cout << word[5] << endl;
		}
		else if(sum%7==6)
		{
			cout << word[6] << endl;
		}
		

		
		
	}
	
	
	
	
}
