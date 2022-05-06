//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cctype>
//#include <cmath>
//#include <iomanip>
//#include <cstring>
//#include <string>
//#include <math.h> 
//#include <map>
//#include <sstream>

#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <math.h>
#include <vector>
#include <map> 

using namespace std;

int main()
{
	string std;
	int count=1;
	while(getline(cin,std))
	{
		for(int i=0;i<std.size();i++)
		{
			if(std[i]=='"' and count%2==1)
			{
				cout << "``";
				count++;
			}
			else if(std[i]=='"' and count%2==0)
			{
				cout << "''";
				count++;
			}
			else
			{
				cout << std[i] ;
			}
			
		}
		cout << endl;
	}
	
	
}


