#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>
#include <math.h>

using namespace std;

void Bangla(long long int);

int main()
{
	
	long long int num;
	int count=1;
	
//	int kuti_count;
//	int lakh_count;
//	int hajar_count;
//	int shata_count;
	
	while(cin >> num)
	{		
		cout << count << ".";
		
		if(num==0)
		{
			cout<< " 0";
		}
		else
		{
			Bangla(num);
		}
		cout << endl;
		
		count ++ ;
	}
	
}
void Bangla(long long int num)
{
	//test
	//	cout << num;
	
	if(num>=10000000)
	{
		Bangla(num/10000000);
		cout<< " kuti";
		num=num%10000000;
	}
	if(num>=100000)
	{
		Bangla(num/100000);
		cout<< " lakh";
		num=num%100000;
	}
	if(num>=1000)
	{
		Bangla(num/1000);
		cout<< " hajar";
		num=num%1000;
	}
	if(num>=100)
	{
		Bangla(num/100);
		cout<< " shata";
		num=num%100;
	}
	
	if(num!=0)
	{
		cout << " "<<num ;
	}



}
