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
	cin >> time ;
	cin.get();
	for(int i=1;i<=time;i++)
	{
		int count = 1;
		int sum1,sum2;
		int x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		sum1 = (x1+y1)*(x1+y1+1)/2 + x1;
		sum2 = (x2+y2)*(x2+y2+1)/2 + x2;
		
		cout << "Case " << i << ": " << sum2-sum1 << endl;
	}
	
	
}
