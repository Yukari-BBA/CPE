#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	int i,t,r=0;
	string is1;
	
	while(getline(cin,is1))//��J���� 
	{
		if(r)//��X�U����ƫe���� 
		{
			cout<<endl;
		}
		
		int asc[97]={0},count[97]={0};
		
		for(i =0;i<96;i++)//����ASCII���� 
		{
			asc[i]=i+32;
		}
		
		for(i =0;i<is1.length();i++)//�p���J�r�ꪺASCII�X�{���� 
		{
			count[is1[i]-32]++;
		}
		
		for(i =0;i<96;i++)//�ή�w�ƦC�k 
		{                 //�̷��D�حn�D�ƦC 
			for(t=0;t<96-i-1;t++)
			{
				if(count[t]>count[t+1])//�Ʀr���j�b�᭱ 
				{
					int temp=asc[t];
					asc[t]=asc[t+1];
					asc[t+1]=temp;
					temp=count[t];
					count[t]=count[t+1];
					count[t+1]=temp;
				}
				
				else if(count[t]==count[t+1]&&asc[t]<asc[t+1])
				{//�Ʀr�@�ˮ�ASCII���j���b�᭱ 
					int temp=asc[t];
					asc[t]=asc[t+1];
					asc[t+1]=temp;
				}
				
			}
		}
		
		for(i =0;i<96;i++)//��X
		{ 
			if(count[i]!=0)
			{
				cout<<asc[i]<<" "<<count[i]<<endl;
			}
//			cout<<asc[i]<<" "<<count[i]<<endl;
		}
		
		r=1;//�Ĥ@����ƫ�n���� 
	}
    return 0;
}
