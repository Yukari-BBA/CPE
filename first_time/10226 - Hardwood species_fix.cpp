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
	
	ios_base::sync_with_stdio(0);
	
	int time;
	double total_count;
	bool found=false;
	string name_tmp;
	map<string,int> name_map;
	
	
	cin >> time >> ws;
	
	for(int i=0;i<time;i++)
	{
//		data restet
		total_count = 0.0;
		name_map.clear();
		
		while(getline(cin,name_tmp) and name_tmp!="")
		{
			name_map[name_tmp]++;
			total_count++;
		}
		
		
		
//		for (map<string, int>::iterator i = name_map.begin(); i != name_map.end(); i++) //此回圈跑 map 中共有幾對 key , value
//        {
//            cout << fixed << setprecision(4); //setprecision() 用法括號內為多少就取幾位 , 加上 fixed 取值為小數點後 , 這裡是取小數點後4位
//            cout << i->first << " " << i->second * 100.0 / total_count << endl; //i->first 為 map 的 key, i->second 為 map 的 value
//                                                                      			//這裡為先輸出 key , 在輸出 value 佔總數多少的百分比
//        }
        
        
        
        for(map<string,int>::iterator i=name_map.begin();i!=name_map.end();i++)
        {
        	cout << fixed << setprecision(4) << i->first << " " << i->second * 100 / total_count << endl;
		}
        
        
        
        cout << endl;
	}
}
