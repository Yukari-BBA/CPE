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

int main()
{
	
	ios_base::sync_with_stdio(0);
	
	int time;
	double total_count;
	bool found=false;
	string name_tmp;
	map<string,int> name_map;
	
	
	cin >> time >> ws;
	
	for(int i=0;i<time;i++)
	{
//		data restet
		total_count = 0.0;
		name_map.clear();
		
		while(getline(cin,name_tmp) and name_tmp!="")
		{
			name_map[name_tmp]++;
			total_count++;
		}
		
		
		
//		for (map<string, int>::iterator i = name_map.begin(); i != name_map.end(); i++) //���^��] map ���@���X�� key , value
//        {
//            cout << fixed << setprecision(4); //setprecision() �Ϊk�A�������h�ִN���X�� , �[�W fixed ���Ȭ��p���I�� , �o�̬O���p���I��4��
//            cout << i->first << " " << i->second * 100.0 / total_count << endl; //i->first �� map �� key, i->second �� map �� value
//                                                                      			//�o�̬�����X key , �b��X value ���`�Ʀh�֪��ʤ���
//        }
        
        
        
        for(map<string,int>::iterator i=name_map.begin();i!=name_map.end();i++)
        {
        	cout << fixed << setprecision(4) << i->first << " " << i->second * 100 / total_count << endl;
		}
        
        
        
        cout << endl;
	}
}
