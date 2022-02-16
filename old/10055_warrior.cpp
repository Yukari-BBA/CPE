#include <iostream> 
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <cctype>

using namespace std;

int main()
{
	long long num1=0;
	long long num2=0;
	long long sum=0;
	
	
	while(cin >>num1 >>num2)
	{
		sum=0;
		if(num1>num2)
		{
			sum = num1-num2;
		}
		else if(num2>num1)
		{
			sum = num2-num1;
		}
		cout <<sum<<endl;
	}
	
	
}

