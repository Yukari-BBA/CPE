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
#include <sstream>

using namespace std;

int main()
{	
	int n,m,i,base,cs,x,k,total,min;
	//��J���� 
	int cost[36];
	//�����K�ybase 
	int cheapestlist[36],cheapestcount;
	
	cin >> n;
	for(cs=1;cs<=n;cs++)
	{
		cout << "Case " << cs << ":\n";
		//inpust cost
		for(int i=0;i<36;i++)
		{
			cin >> cost[i];
		}
		
		//���X�Ӽƥ� 
//			cout << "dsadsa"<<endl;
		cin >> m;
		
		while(m--)
		{
			//input�ƥ� 
			cin >> x;
			min = 2000000;
			//set cheapestcount=0 �����٨S���
			cheapestcount=0;
			//��base==2 �v�@�p��C�L���� 
			for(base=2;base<37;base++)
			{
				total=0;
				// k=tmp
				k=x;
				while(k>0)
				{
					total+=cost[k%base];
					k/=base;
//					total = total +cost[k%base]
//					k=k/base;
//					total +=cost[k%base];
//					k=k/base;

				}
				if(total<min)
				{
					min = total;
					cheapestlist[0]=base;
					cheapestcount=1;
				}
				else if(total==min)
				{
					// �@�˷s�W 
					cheapestlist[cheapestcount++]=base;
				}
			} 
			cout << "Cheapest base(s) for number " << x << ":";
			for(base = 0;base<cheapestcount;base++)
			{
				cout << " " << cheapestlist[base];
			}
			cout << endl;
		}
		if(cs<n)
		{
			cout << endl;
		}
	}
		
}
