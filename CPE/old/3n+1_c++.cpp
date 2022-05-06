#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int alg(int n)
{
	int count=1;
	while(n!=1)
	{
		if(n % 2==1)
		{
			n = 3 * n + 1;
			count++;
		}
		else if(n%2==0)
		{
			n = n / 2;
			count++;
		}
	}
//	cout << n << endl;
//	cout << count << endl;
	return count;
}

int main()
{
	int i,j;
	int min,max;
//	int maxnum=0;
	while(cin>> i >>j)
	{
		int maxnum=0;
		int count = 0;
		int max = 0;
//		cout<< i << j;
		if(i>j)
		{
			min = j;
			max = i;
		}
		else
		{
			min = i;
			max = j;
		}
		for(min;min<=max;min++)
		{
			count = alg(min);
//			cout << min <<endl;
			if(count>maxnum)
			{
				maxnum = count;
			}
		}
		cout << i << " " << j << " " << maxnum << endl; 
	}
	return 0;
}
