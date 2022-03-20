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

using namespace std;

int main()
{
	int time;
	string input_std;
	map<string,int> mp;
	
	while(cin >> time and time!=0)
	{
		//data clear
		mp.clear();
		mp["top"] = 1;
		mp["north"] = 2;
        mp["west"] = 3;
        mp["east"] = 4;
        mp["south"] = 5;
        mp["bottom"] = 6;
		
		for(int i=0;i<time;i++)
		{
			cin >> input_std;
			
			//test cout
//			cout << input_std <<endl;
			
			if(input_std=="north")
			{
				int tmp = mp["north"];
                mp["north"] = mp["top"];
                mp["top"] = mp["south"];
                mp["south"] = mp["bottom"];
                mp["bottom"] = tmp;
			}
			else if(input_std=="south")
			{
				int tmp = mp["south"];
                mp["south"] = mp["top"];
                mp["top"] = mp["north"];
                mp["north"] = mp["bottom"];
                mp["bottom"] = tmp;
			}
			else if(input_std=="east")
			{
				int tmp = mp["east"];
                mp["east"] = mp["top"];
                mp["top"] = mp["west"];
                mp["west"] = mp["bottom"];
                mp["bottom"] = tmp;
			}
			else if(input_std=="west")
			{
				int tmp = mp["west"];
                mp["west"] = mp["top"];
                mp["top"] = mp["east"];
                mp["east"] = mp["bottom"];
                mp["bottom"] = tmp;
			}
			
			
		}
		
		cout << mp["top"] << "\n";
		
	}
	
	
}
