#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
//	int test= 90;
//	int tmp=90%7;
//	
//	cout << tmp <<endl;
	
	////////////////////
	long long int Hashmat, opponent; // �ŧi��Ӫ���� Hashmat�Bopponent�C�]����ƪ��j�p���i��W�L 2^32�A�ҥH�n�� long long int �s���C
	/* �� while �j�����ϥΪ̳s���J */
	while(cin>>Hashmat>>opponent)
	{
		cout<<abs(Hashmat-opponent)<<endl; // �ƥX Hashmat �M opponent �t�������
	}

}
