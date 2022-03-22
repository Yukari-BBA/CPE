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
#include <sstream>

using namespace std;

string s;
int cnt, blk;

int main()
{
	while (getline(cin, s))
	{
        for (int i = 0; i < s.length(); i++)
		{
            if (s[i] == '\"')
			{
                if (cnt % 2 == 0) cout << "``";
                else cout << "''";
                cnt++;
            }
            else cout << s[i];
        }
        cout << "\n";
    }
	
}
