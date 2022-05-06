#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>
#include <math.h>

using namespace std;

int main()
{
	// 1 6  1 1 2 2 3 3       3       
	long long int first_num;
	long long int gest_count;
	long long int gest_sum;
	long long int day_limt;
	
	while(cin >> first_num >> day_limt)
	{
		gest_count=0;
		gest_sum=0;
		
		gest_count = gest_count + first_num;
		
		while(day_limt>0)
		{
			day_limt = day_limt - gest_count;
			gest_sum = gest_sum + gest_count;
			if(day_limt>0)
			{
				gest_count++;
			} 
		}
		
//		cout << gest_count << " " << gest_sum << endl;
		
		cout << gest_count << endl;
		
	}
}
