#include <iostream>
#include <cctype>
#include <cstring>
#include <string> 
#include <iomanip>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int num1;
	int num2;
	int tmp1;
	int tmp2;
	int carry;
	int count;
	bool flag;
	
	while(cin>>num1>>num2 and num1>0 or num2>0)
	{
//		cout <<num1<<" "<<num2<<endl;
		tmp1=0;
		tmp2=0;
		carry=0;
		count=0;
		flag = false;
		
		while(num1>0 or num2>0)
		{
			tmp1=num1%10;
			tmp2=num2%10;
			num1=num1/10;
			num2=num2/10;

//			int a = tmp1+tmp2;
//			cout << tmp1 <<" "<<tmp2 <<" "<<a<<endl;
			
			carry = tmp1+tmp2+carry;
			carry = carry/10;
			if(carry>0)
			{
				flag=true;
				count=count+1;
			}
			
		}
		if(flag==true and count>1)
		{
			cout << count << " carry operations."<<endl; 
		}
		else if(flag==true and count==1)
		{
			cout << count << " carry operation."<<endl;
		}
		else if(flag==false)
		{
			cout << "No carry operation."<<endl;
		}
		
	}
}
