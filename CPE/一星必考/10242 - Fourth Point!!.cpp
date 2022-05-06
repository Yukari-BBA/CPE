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
	double x[4],y[4];
	
	double x1,y1,x2,y2,x3,y3,x4,y4;
	
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
	{
		if(x2 == x3 and y2 == y3)
		{
			x[1] = x2;
			y[1] = y2;
			x[0] = x1;
			y[0] = y1;
			x[2] = x4;
			y[2] = y4;
		}
		else if(x2 == x4 and y2 == y4)
		{
			x[1] = x2;
			y[1] = y2;
			x[0] = x1;
			y[0] = y1;
			x[2] = x3;
			y[2] = y3;
		}
		else if(x1 == x3 and y1 == y3)
		{
			x[1] = x1;
			y[1] = y1;
			x[0] = x2;
			y[0] = y2;
			x[2] = x4;
			y[2] = y4;
		}
		else if(x1 == x4 and y1 == y4)
		{
			x[1] = x1;
			y[1] = y1;
			x[0] = x2;
			y[0] = y2;
			x[2] = x3;
			y[2] = y3;
		}
		else if(x1 == x2 and y1 == y2)
		{
			x[1] = x1;
			y[1] = y1;
			x[0] = x3;
			y[0] = y3;
			x[2] = x4;
			y[2] = y4;
		}
		
		cout << fixed << setprecision(3) << x[0]+x[2]-x[1] << " " << y[0]+y[2]-y[1] << endl;
//						 setprecision
	}
    


}
