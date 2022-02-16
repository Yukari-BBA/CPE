#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int grid_x,grid_y;
	cin >>grid_x>>grid_y;
	int x,y;
	string face;
	string comand;
	string direction[4] = { "E","N","W","S" };
	while(cin>>x>>y>>face>>comand)
	{	
		bool lost = false;
//		cout<<comand<<endl;
//		if(x>grid_x or y > grid_y or x < 0 or y <0)
//		{
//			lost = true;
//		}
		int tmp=0;
		for(int i=0;i<4;i++)
		{
			if(direction[i]==face)
			{
				tmp=i;
//				cout << i <<endl;
			}
		}
		for(int i=0;i<comand.size();i++)
		{
//			cout<<comand[i];
			if(comand[i]=='R')
			{
				tmp=tmp-1;
				if(tmp<0)
				{
					tmp=3;
				}
			}
			else if(comand[i]=='L')
			{
				tmp=tmp+1;
				if(tmp>3)
				{
					tmp=0;
				}
			}
			else if(comand[i]=='F')
			{
				if(tmp==0)
				{
					x = x+1;
					if(x>grid_x or y > grid_y or x < 0 or y <0)
					{
						lost = true;
					}
				}
				else if(tmp==1)
				{
					y = y+1;
					if(x>grid_x or y > grid_y or x < 0 or y <0)
					{
						lost = true;
					}
				}
				else if(tmp==2)
				{
					x = x-1;
					if(x>grid_x or y > grid_y or x < 0 or y <0)
					{
						lost = true;
					}
				}
				else if(tmp==3)
				{
					y = y-1;
					if(x>grid_x or y > grid_y or x < 0 or y <0)
					{
						lost = true;
					}
				}
			}
			cout << x << y<<endl;
		}
		face = direction[tmp];
		if(lost==true)
		{
			cout <<x<<" "<<y<<" "<<face<<" "<<"LOST"<<endl;
		}
		else if(lost==false)
		{
			cout <<x<<" "<<y<<" "<<face<<endl;
		}
		/*
		5 3
		1 1 E
		RFRFRFRF
		
		5 3
		1 1 E
		RFRFRFRF
		3 2 N
		FRRFLLFFRRFLL
		
		0 3 W
		LLFFFLFLFL
		*/
		
	}


} 
