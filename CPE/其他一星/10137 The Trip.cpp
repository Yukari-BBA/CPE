#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	double money[1000],sum,avg,sum1,sum2;
	
	int time;
	
	bool flag=false;
	
	while(cin >> time)
	{
		if(time==0)
		{
			break;
		}
		sum1=0,sum2=0,sum=0;
		
		for(int i=0;i<time;i++)
		{
			cin >> money[i];
			sum = sum + money[i]*100;
		}
		
		avg = floor((double)sum/time+0.5)/100;
		
		for(int i=0;i<time;i++)
		{
			if (money[i]>avg) sum1=sum1+money[i]-avg;
			else sum2=sum2+avg-money[i];
	    }
	    
	    
	    cout.precision(2);
	    cout <<"$";
	    if (sum1 < sum2)  cout << fixed << sum1 <<endl;
	    else  cout << fixed << sum2 <<endl;  
		
		
		
	}
	
	
} 
