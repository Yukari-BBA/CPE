#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <cctype>
#include <math.h>
#include <vector> 

using namespace std;

int main()
{
	long double p;
	long double fail;
	long double ans;
	int time;
	int players;
	int win_player;
	
	cin >> time;
	for(int i=0;i<time;i++)
	{
		cin >> players;
		cin >> p;
		cin >> win_player;
		
		fail = 1 - p;
		
		if(p==0)
		{
			cout << "0.0000" << endl;
			continue;
//			continue;
		}
		
		ans = p * pow(fail,win_player-1)/(1-pow(fail,players));
//			  p * pow(fail,player_win-1)/(1-pow(fail,plyerss);
		cout << fixed << setprecision(4) << ans << endl;  // 輸出答案，並且要求輸出到小數點第四位
		
//		cout << fixed << setprecision

//		cout << fixed << setprecision(4)  << ans << endl;
//		
//		ans = p * pow(fail,player_win-1)/1-pow(fail,plyers);
//		cout << fixed << setprecision()
		
		
		
		
	}
	
}
