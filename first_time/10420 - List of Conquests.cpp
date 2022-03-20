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
    cin >> time;
    map <string, int> mp;
    cin.get();
    string s;
    while (time--) 
	{
        getline(cin, s);
		int point=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				s.erase(i);
			} 
		}
//		for(int i=0;i<s.size();i++)
//		{
//			cout << s[i] << endl;
//		}
        mp[s]++;
    }
    for(map<string,int>::iterator i=mp.begin();i!=mp.end();i++)
    {
    	cout << i->first << " " << i->second << "\n";
	}
    return 0;
}
