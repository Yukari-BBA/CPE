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
	//�ˬd�wmap[x][y]������ �b�|��size����� 
	int top,left,bottom,right,i,j;
	//���o�����I���r�� 
	char ch=mapp[x][y];
	//�p��n�ˬd���W �U �� �k
	top = x-radius;
	left = y - radius;
	bottom = x + radius;
	right = y + radius;
	//�W�U���k ����@���� �W�X�a����� �^��0(����)
	if(top<0 or bottom >=height or left<0 or right >=width)
	{
		return 0;
	}
	//�ˬd�d�򤤥����r�� 
	for(int i=top;i<=bottom;i++)
	{
		for(int j=left;j<=right;j++)
		{
			//�p�G�o�{���P�󤤤ߦr�� 
			if(mapp[i][j]!=ch)
			{
				return 0;
			}
		}
	}
	//�p�G�S���o�{���P���r�� 
	return 1;

}

int main()
{
	int i,radius,time,count,n;
	int x,y;
	
	//��Jtime
	cin >> time; 
	
	for(int count=1;count<=time;count++)
	{
		//��J �� �e �����I�Ӽ�  
		cin >> height >> width >> n;
		//��J�a�� 
		for(int i=0;i<height;i++)
		{
			cin >> mapp[i];
		}
		cout << height << " " << width << " " << n <<endl;
		
		//�X�����߬d��
		for(int i=0;i<n;i++)
		{
			//��J�����I 
			cin >> x >> y;
			radius=0;
			while(isSquare(x,y,radius))
			{
				radius ++ ;
			}
			//��X����Υb�| 2*radius -1
			cout << radius*2-1 << endl; 
		} 
	}		
}
