#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip> 

using namespace std;

int main()
{
	int time=0;
	
	cin >> time;
	int player_num=0;
	int player_win=0;
	long double Probability=0;
	long double fail=0;
	
	for(int i=0;i<time;i++)
	{
		cin >> player_num >> Probability >> player_win;
		fail = 1-Probability;
		
//		double no_chance = pow(fail, player_num);   // Second �O�n�ΨӧP�_���\�����v�� 0 �����p
		if (fail == 1) 
		{    // �Y (���Ѫ����v)^���a�ƶq = 1 �A �N���Ѿ��v = 1 �A�Y�����\���v = 0
			cout << "0.0000" << endl;
			continue;
		}
	
		double ans = Probability * pow(fail, player_win - 1) / (1.0 - pow(fail, player_num));
		cout << fixed << setprecision(4) << ans << endl;  // ��X���סA�åB�n�D��X��p���I�ĥ|��
		/////////////////setprecision	
	}
	
	
	////////////////////////////////////////
	
	
//#include <iomanip>
//#include <math.h>
//toupper
//toupper
//tolower
//tolower
//double
//double ans = Probability * pow(fail,player_win-1)/(1.0-pow(fail,player_num))
//cout << fixed <<setprecision(4) << ans <<endl;

//double ans = Probability * pow(fail,player_win-1)/(1.0-pow(fail,player_num))

	
	
	
	return 0;
} 
