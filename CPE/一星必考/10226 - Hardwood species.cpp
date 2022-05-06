#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <string>
#include <math.h> 

using namespace std;

int main()
{
	int time;
	double total_count;
	string std_tmp;
	double num_rate_tmp;
	vector<string> std;
	vector<double> num_count;
	vector<double> num_rate;
	bool found=false;
	
	
	cin >> time >> ws;
	
	for(int i=0;i<time;i++)
	{
//		data restet
		std.clear();
		num_count.clear();
		num_rate.clear();
		total_count = 0.0;
		
		while(getline(cin,std_tmp) and std_tmp!="")
		{
			
			found=false;
			total_count = total_count + 1.0;

			for(int j=0;j<std.size();j++)
			{
				if(std_tmp==std[j])
				{
					num_count[j]++;
					found=true;
				}
			}
			if(found==false)
			{
				std.push_back(std_tmp);
				num_count.push_back(1.0);
			}
//			test cout
//			cout << std_tmp << endl;
//			cout << num_count[0] <<endl;
		}
		
		for(int j=0;j<std.size();j++)
		{
			num_rate_tmp = num_count[j] / total_count *100; 
			num_rate.push_back(num_rate_tmp);
		}
		
		
		//sort
		for(int x=0;x<std.size()-1;x++)
		{
			for(int y=0;y<std.size()-1-x;y++)
			{
				double num_tmp;
//				int(std[y][0])
				if(int(std[y][0])>int(std[y+1][0]))
				{
					std_tmp = std[y];
					std[y] = std[y+1];
					std[y+1] = std_tmp;
					num_tmp=num_rate[y];
					num_rate[y]=num_rate[y+1];
					num_rate[y+1]=num_tmp;
				}
			}
		}

//		cout << std[0][0] <<endl;
		
		
		for(int j=0;j<std.size();j++)
		{
			cout << fixed << setprecision(4) << std[j] << " " << num_rate[j] << endl;
		}
		
	}
}
