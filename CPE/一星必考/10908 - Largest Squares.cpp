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
char mapp[100][100];
int height,width;

int isSquare(int x,int y,int radius)
{
	//檢查已map[x][y]為中心 半徑為size的方塊 
	int top,left,bottom,right,i,j;
	//取得中心點的字元 
	char ch=mapp[x][y];
	//計算要檢查的上 下 左 右
	top = x-radius;
	left = y - radius;
	bottom = x + radius;
	right = y + radius;
	//上下左右 任何一個邊 超出地圖邊界 回傳0(失敗)
	if(top<0 or bottom >=height or left<0 or right >=width)
	{
		return 0;
	}
	//檢查範圍中全部字元 
	for(int i=top;i<=bottom;i++)
	{
		for(int j=left;j<=right;j++)
		{
			//如果發現不同於中心字元 
			if(mapp[i][j]!=ch)
			{
				return 0;
			}
		}
	}
	//如果沒有發現不同的字元 
	return 1;

}

int main()
{
	int i,radius,time,count,n;
	int x,y;
	
	//輸入time
	cin >> time; 
	
	for(int count=1;count<=time;count++)
	{
		//輸入 長 寬 中心點個數  
		cin >> height >> width >> n;
		//輸入地圖 
		for(int i=0;i<height;i++)
		{
			cin >> mapp[i];
		}
		cout << height << " " << width << " " << n <<endl;
		
		//幾次中心查找
		for(int i=0;i<n;i++)
		{
			//輸入中心點 
			cin >> x >> y;
			radius=0;
			while(isSquare(x,y,radius))
			{
				radius ++ ;
			}
			//輸出正方形半徑 2*radius -1
			cout << radius*2-1 << endl; 
		} 
	}		
}
