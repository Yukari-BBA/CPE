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
	string word="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	
	string input_std;
	
	while(getline(cin,input_std))
	{
		for(int i=0;i<input_std.size();i++)
		{
			if(input_std[i]!=' ')
			{
				for(int j=0;j<word.size();j++)
				{
					if(input_std[i]==word[j])
					{
						cout << word[j-2];
					}
				}
			}
			else if(input_std[i]==' ')
			{
				cout << " ";
			}
		}
		cout << endl;
		
		
		
	}
	
}
