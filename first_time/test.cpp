#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t,n,i,c;
	string is1;
	cin>>c;//��J����ƶq 
	
	for(t=1;t<=c;t++)
	{
		cin>>is1>>is1>>n;//��J�x�}�ƶq
						 //�e����N=�ҥH��string��J���N�O�Ʀr�F 
		long long  mat[n*n]={};//�ϥΤ@���}�C�N�i�H�F
		 
		for(i=0;i<n*n;i++)//��J�x�}�Ʀr 
		{	
			cin>>mat[i];
		
		}
		
		for(i=0;i<n*n;i++)//�]���|�H����������I 
		{				  //�ҥH�q�̥~���ӼƦr�}�l��������� 
			if(mat[i]!=mat[(n*n-1)-i]||mat[i]<0)//�Y�Ʀr�p��0�άO�Ʀr���@�˴N���_ 
			{
				break;
			}
		}
		
		if(i==n*n)//�p�G�j��S���Q���_�N�O��ٯx�} 
		{
			cout<<"Test #"<<t<<": Symmetric."<<endl;
		}
		else
		{
			cout<<"Test #"<<t<<": Non-symmetric."<<endl;
		}
	}
	return 0;
}
