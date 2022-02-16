#include <iostream> 
#include <vector>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	int len=0;
	cin >> len;
	cin.get();
	int count[26]={};
	for(int i=0;i<26;i++)
	{
		count[i]=0;
//		cout << i << endl;
	}
	string abc[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	
	//////////////////
	
	for(int i=0;i<len;i++)
	{
		
		string str1;
		getline(cin,str1);
	//		轉大寫 讀次數 
		for(int j=0;j<str1.size();j++)
		{
	//			cout << j;
			str1[j]=toupper(str1[j]); 
			if(str1[j]=='A')
			{
				count[0]=count[0]+1;
			}
			else if(str1[j]=='B')
			{
				count[1]=count[1]+1;
			}
			else if(str1[j]=='C')
			{
				count[2]=count[2]+1;
			}
			else if(str1[j]=='D')
			{
				count[3]=count[3]+1;
			}
			else if(str1[j]=='E')
			{
				count[4]=count[4]+1;
			}
			else if(str1[j]=='F')
			{
				count[5]=count[5]+1;
			}
			else if(str1[j]=='G')
			{
				count[6]=count[6]+1;
			}
			else if(str1[j]=='H')
			{
				count[7]=count[7]+1;
			}
			else if(str1[j]=='I')
			{
				count[8]=count[8]+1;
			}
			else if(str1[j]=='J')
			{
				count[9]=count[9]+1;
			}
			else if(str1[j]=='K')
			{
				count[10]=count[10]+1;
			}
			else if(str1[j]=='L')
			{
				count[11]=count[11]+1;
			}
			else if(str1[j]=='M')
			{
				count[12]=count[12]+1;
			}
			else if(str1[j]=='N')
			{
				count[13]=count[13]+1;
			}
			else if(str1[j]=='O')
			{
				count[14]=count[14]+1;
			}
			else if(str1[j]=='P')
			{
				count[15]=count[15]+1;
			}
			else if(str1[j]=='Q')
			{
				count[16]=count[16]+1;
			}
			else if(str1[j]=='R')
			{
				count[17]=count[17]+1;
			}
			else if(str1[j]=='S')
			{
				count[18]=count[18]+1;
			}
			else if(str1[j]=='T')
			{
				count[19]=count[19]+1;
			}
			else if(str1[j]=='U')
			{
				count[20]=count[20]+1;
			}
			else if(str1[j]=='V')
			{
				count[21]=count[21]+1;
			}
			else if(str1[j]=='W')
			{
				count[22]=count[22]+1;
			}
			else if(str1[j]=='X')
			{
				count[23]=count[23]+1;
			}
			else if(str1[j]=='Y')
			{
				count[24]=count[24]+1;
			}
			else if(str1[j]=='Z')
			{
				count[25]=count[25]+1;
			}
		}
	}
	
	//////////////////////////////////////
	for(int i=0;i<25;i++)
	{
		for(int j=0;j<25-i;j++)
		{
			if(count[j]<count[j+1])
			{
				int tmp;
				string tmpp;
				
				tmp = count[j];
				count[j] = count[j+1];
				count[j+1] = tmp;
				
				tmpp = abc[j];
				abc[j] = abc[j+1];
				abc[j+1] = tmpp;
			}
		}
	}
	for(int i=0;i<26;i++)
	{
		if(count[i]!=0)
		{
			cout << abc[i] <<" "<<count[i]<<endl;
		}
	}
//	cout << str1;
//	cout << count[25];
//	cout << "123123123123";

} 
