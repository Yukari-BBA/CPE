#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <cctype>
#include <math.h>
#include <vector> 

using namespace std;

int main()
{
	long long num1;
	long long num2;
	long long sum;
	while(cin >> num1 >> num2)
	{
		sum = abs(num1 - num2);
		cout << sum <<endl;
	} 
	
}
