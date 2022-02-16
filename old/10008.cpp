#include<iostream>
#include<cctype>

using namespace std;

int main()
{
	int time,len = 0;
	int count[256]= {};
	char c;
	cin>>time;
	while(cin>>c) 
	{
		len++;
		count[toupper(c)]++;
	}
	while(--len)
	{
		for(c = 'A';c<='Z';c++)
		{
			if(count[c] == len)
			{
				cout<<c<<" "<<count[c]<<endl;
			}
		}
	}
	return 0;
} 
