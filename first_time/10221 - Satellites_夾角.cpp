#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iomanip>
#include <math.h>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

#define PI acos(0.0)*2.0

#define PI acos(0.0)*2.0

#define PI acos(0.0)*2.0
#define PI acos(0.0)*2.0

//ans = p * pow(fail,win_player)/(1-pow(fail,players))

//#define PI acos(0.0)*2.0
//#define PI acos(0.0)*2.0

int main()
{
	long double range,angle;
	long double earth = 6440.0;
	string type;
	
//	弦長 chord
	double chord;
//	弧長 arc
	double arc;
	
	while(cin >> range >> angle >> type)
	{
		//fix angle
		if(type=="min")
		{
			angle = angle /60.0;
		}
		if(angle>180)
		{
			angle = 360.0 - angle;
		}
		
		
		
		
//		arc = 2 * PI * (range+earth)*angle/360;
		arc = 2 * PI * R * angle /360
		chord = 2 * R * cos((90.0-angle/2.0)/180*PI)
		
		
		
		//	弦長 chord
		chord = (earth + range) * cos((90.0 - angle/2.0) / 180.0 * PI) * 2.0;
		
		//	弧長 arc
		arc = 2.0 * PI * (earth + range) * angle / 360.0;
		
//		arc = 2.0 * PI * (earth + range) * angele /360;
//		chord = (range + earth) * 2.0 *cos((90.0-angle/2.0)/180.0*PI)
		
//		arc = 2.0 * PI * r *angle /360
//		chord = 2.0 * r * cos((90.0-angle/2.0)/180*PI)*2.0;


//		arc = 2.0 * PI * r  *angle /360;
//		chord = 2.0 * r * cos((90.0-angle/2)/180.0*PI);
//		chord = 2.0*r*cos((90-angle/2)*PI/180);
		cout << fixed << setprecision(6) << arc << " " << chord << "\n";
		
	}
	
	return 0;
	
}
