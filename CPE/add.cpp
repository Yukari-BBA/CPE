#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	int num1=0,num2=0;
	bool flag=false;
	while(cin >> num1 >>num2 && (num1>0 or num2>0 ))
//	&& num1!=0 &&num2!=0
	{
//		cout << "dasdsadsa" <<endl;
		
		int tmp1=0,tmp2=0,total=0,sum=0;
		flag=false;
		while(num1>0 or num2>0 )
		{
			if(num1==0 && num2==0)
			{
				break;
			}
			sum = 0;
			tmp1 = 0;
			tmp2 = 0;
			tmp1 = num1%10;
			tmp2 = num2%10;
			sum = tmp1+tmp2;
			if(flag == true)
			{
				sum =sum+1;
				flag = false;
			}
			if(sum>=10)
			{
				total++;
				flag = true;
			}
//			cout << num1 <<" "<<num2<<" "<< sum <<" "<<total<<endl;
			num1 = num1/10;
			num2 = num2/10;
		}
		
//		cout << total<<endl;

		if(total==1)
		{
			cout << total <<" "<<"carry operation."<<endl;
		}
		else if(total==0)
		{
			cout <<"No carry operation."<<endl;
		}
		else
		{
			cout << total <<" "<<"carry operations."<<endl;
		}
		
	}
} 
