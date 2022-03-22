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

int GCD(int num1,int num2)
{
	if(num1==0)
	{
		return num2;
	}
	else
	{
		GCD(num2%num1,num1);
	}
}
int main()
{
	int sum;
	int n;
	int i,j;
	while(cin >> n and n!=0)
	{
		sum=0;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
			    sum+=GCD(i,j);
			}	
		}
		cout << sum <<endl;
	}
	
}
