#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>
#include <math.h>

using namespace std;

int main()
{
	//data
	int x,y;
	int count=1;
	
	while(cin >> x >> y)
	{
		if(x==0 and y==0)
		{
			break;
		}
		//space
		char map[x][y]={};
		int mine_count[x][y]={};
		
		//set map
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				cin >> map[i][j];
			}
		}
		
//		//test print map
//		for(int i=0;i<x;i++)
//		{
//			for(int j=0;j<y;j++)
//			{
//				cout <<  map[i][j];
//			}
//			cout << endl;
//		}
		
//		count map
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				if(map[i][j]=='*')
				{
					mine_count[i][j]=99;
				}
				else
				{
					if(map[i-1][j-1]=='*' and i-1>=0 and j-1>=0 and i-1<=x-1 and j-1<=y-1)
					{
						mine_count[i][j]=mine_count[i][j]+1;
					}
					if(map[i-1][j]=='*' and i-1>=0 and j>=0 and i-1<=x-1 and j<=y-1)
					{
						mine_count[i][j]=mine_count[i][j]+1;
					}
					if(map[i-1][j+1]=='*' and i-1>=0 and j+1>=0 and i-1<=x-1 and j+1<=y-1)
					{
						mine_count[i][j]=mine_count[i][j]+1;
					}
					
					
					if(map[i][j-1]=='*' and i>=0 and j-1>=0 and i<=x-1 and j-1<=y-1)
					{
						mine_count[i][j]=mine_count[i][j]+1;
					}
					if(map[i][j+1]=='*' and i>=0 and j+1>=0 and i<=x-1 and j+1<=y-1) 
					{
						mine_count[i][j]=mine_count[i][j]+1;
					}
					
					
					if(map[i+1][j-1]=='*' and i+1>=0 and j-1>=0 and i+1<=x-1 and j-1<=y-1)
					{
						mine_count[i][j]=mine_count[i][j]+1;
					}
					if(map[i+1][j]=='*' and i+1>=0 and j>=0 and i+1<=x-1 and j<=y-1)
					{
						mine_count[i][j]=mine_count[i][j]+1;
					}
					if(map[i+1][j+1]=='*' and i+1>=0 and j+1>=0 and i+1<=x-1 and j+1<=y-1)
					{
						mine_count[i][j]=mine_count[i][j]+1;
					}
				}
			}
		}
		
		if(count ==1)
		{
			cout << "Field #" << count << ":" <<endl;
		}
		else
		{
			cout << endl;
			cout << "Field #" << count << ":" <<endl;
		}
		count ++;
		
		//test print map
//		cout << endl;
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				if(mine_count[i][j]!=99)
				{
					cout <<  mine_count[i][j];
				}
				else
				{
					cout << "*";
				}
			}
			cout << endl;
		}
		
	}
	
}
