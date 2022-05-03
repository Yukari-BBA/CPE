#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>
#include <math.h>

using namespace std;

int main()
{
	string std;
	string error="such number is impossible!";
	int num_sum;
	int max;
	int ans;
	int tmp;
	int flag=false;
	
	while(getline(cin,std))
	{	
		//data reset
		num_sum=0;
		max=1;
		ans=0;
		tmp=0;
		flag=false;
		
		// and the number or input ex: 198 decimal 1+9+8 
		for(int i=0;i<std.size();i++)
		{
			if(std[i]>='0' and std[i]<='9')
			{
				tmp=std[i]-'0';
			}
			else if(std[i]>='A' and std[i]<='Z')
			{
				tmp=std[i]-'A'+10;
			}
			else if(std[i]>='a' and std[i]<='z')
			{
				tmp=std[i]-'a'+36;
			}
			else 
			{
				continue;
			}
			
			if(tmp>max)
			{
				max = tmp;
			}
			
			num_sum = num_sum + tmp;
		}
		
		for(int i=max;i<62;i++)
		{
			if(num_sum%i==0)
			{
				ans = i+1;
				flag=true;
				break;
			}
		}
		
		//test
//		cout << std << " " << num_sum << " " << ans << endl;

		
		if(flag==false)
		{
			cout << error <<endl;
		}
		else if(flag==true)
		{
			cout << ans << endl;
		}


		
	}
	
	
}
