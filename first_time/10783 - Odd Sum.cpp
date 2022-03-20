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
	for(int i=1;i<=time;i++)
	{
		int num1,num2,sum=0;
		cin >> num1 >> num2;
		
		if(num1%2==0)
		{
			num1=num1+1;
		}
		for(int j=num1;j<=num2;j=j+2)
		{
			sum = sum + j;
		}
		
		cout << "Case " << i << ": " << sum << endl;
	}
	
	
}
