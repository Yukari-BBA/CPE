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
//	int t,n,i,c;
	
	int time=0;
	string tmp;
	int n;
	int count;
	
	cin >> time;
	for(int i=1;i<=time;i++)
	{
		count = 0;
		cin >> tmp >> tmp >> n;
		long long mat[n*n]={};
		
		// input map
		for(int j=0;j<n*n;j++)
		{	
			cin>>mat[j];
		}
		
		for(int j=0;j<n*n;j++)//�]���|�H����������I 
		{				  //�ҥH�q�̥~���ӼƦr�}�l��������� 
			if(mat[j]!=mat[(n*n-1)-j]||mat[j]<0)//�Y�Ʀr�p��0�άO�Ʀr���@�˴N���_ 
			{
				break;
			}
			count ++;
		}
		
		if(count==n*n)
		{
			cout<<"Test #"<<i<<": Symmetric."<<endl;
		}
		else
		{
			cout<<"Test #"<<i<<": Non-symmetric."<<endl;
		}
	}
	
}
