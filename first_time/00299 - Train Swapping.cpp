#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <math.h>
#include <vector>
#include <map> 

using namespace std;

int main()
{
	int time;
	cin >> time;
	vector<int> num;
	while(time--)
	{
		int count=0;
		int len;
		int tmp;
		num.clear();
		cin >> len;
		while(len--)
		{
			cin >> tmp;
			num.push_back(tmp);
		}
		for(int i=0;i<num.size()-1;i++)
		{
			for(int j=0;j<num.size()-1-i;j++)
			{
				if(num[j]>num[j+1])
				{
					tmp=num[j];
					num[j]=num[j+1];
					num[j+1]=tmp;
					count ++;
				}
			}
		}
		cout << "Optimal train swapping takes " << count << " swaps." << endl;
	}
}
