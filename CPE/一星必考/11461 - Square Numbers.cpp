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
	int num1,num2;
	int sum1,sum2;
	int ans;
	
	while(cin >> num1 >> num2 and (num1!=0 and num2 !=0))
	{
//		cout << num1 << num2 << endl;
		
		sum1=0,sum2=0;
		sum1=ceil(sqrt(num1-0.1));
		sum2=floor(sqrt(num2+0.1));
		ans = sum2-sum1+1;
		
		cout << ans <<endl;
		
	}
	
}
