#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
	int count = 0;
	int time = 0;
	cin >> time;
	int num=0;
	while(time--)
	{
		cin >> num;
		int hex=0;
		hex=num;
//		cout << num <<endl;
		int count=0;
		while(num>0)
		{
			int tmp=0;
			tmp = num%2;
//			cout << tmp<<endl;
//			cout << num<<endl;
			if(tmp!=0)
			{
				count++;
			}
			num = num /2;
		}
		
		int tmpp=16;
		int hexx=0;
		while(hex>0)
		{
			hexx = hexx + hex %10*tmpp;
			hex = hex/10;
			tmpp=tmpp*16;
		}
		int count2=0;
		while(hexx>0)
		{
			int tmp=0;
			tmp = hexx%2;
			if(tmp!=0)
			{
				count2++;
			}
			hexx = hexx /2;
		}
		
		cout << count <<" "<<count2 <<endl;
		
	}
}
