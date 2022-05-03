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
	
	char octave[16] = "XcdefgabCDEFGAB";
 
	char finger[16][11] = {
	"0000000000", /*X*/ "0111001111", /*c*/
	"0111001110", /*d*/ "0111001100", /*e*/
	"0111001000", /*f*/ "0111000000", /*g*/
	"0110000000", /*a*/ "0100000000", /*b*/
	"0010000000", /*C*/ "1111001110", /*D*/
	"1111001100", /*E*/ "1111001000", /*F*/
	"1111000000", /*G*/ "1110000000", /*A*/
	"1100000000" /*B*/
	};
	
	int time;
	string input_std;
	cin >> time;
	cin.get();
// 	cin.ignore();
	
	for(int k=0;k<time;k++)
	{
		
//		getline(cin,input_std);
//		int key_count[10];
//		for(int i=0;i<10;i++)
//		{
//			key_count[i]=0;
//		}
//		int cur=0,next;

		char input_std[300];
		cin.getline(input_std, 300);
		int len = strlen(input_std);
		int key_count[10] = {};
		int cur = 0, next;
		
//		for(int i=0;i<len;i++) 
		for(int i=0;i<len;i++)
		{
//			for(next = 1; octave[next] != input_std[i]; next++)
			for(next = 1; octave[next] != input_std[i]; next++);
			{
				for(int j=0; j < 10; j++)
//				for(int j=0; j < 10; j++)
				{
					if(finger[cur][j] == '0' && finger[next][j] == '1')
					{
						++key_count[j];
					}
				}
			}
			cur = next;
		}

//		for(int i = 0; i < len; i++) 
//		{
//			for(next = 1; octave[next] != input_std[i]; next++);
//			{
//				for(int j = 0; j < 10; j++)
//				{
//					if(finger[cur][j] == '0' && finger[next][j] == '1') 
//					{
//						++key_count[j];
//					}
//				}
//			}
//			cur = next;
//		}

		cout << key_count[0];
		for(int j = 1; j < 10; j++)
		{
			cout << " " << key_count[j];
		}
		cout << endl;

		
		//test cout 
//		cout << input_std <<endl;
	}
	return 0;	
}
