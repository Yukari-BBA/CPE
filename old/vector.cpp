#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	int tmp;
	vector<int> num;
	while(cin >> tmp)
	{
		num.push_back(tmp);
		if(tmp==0)
		{
			break;
		}
	}
//	for(int i= 0;i<num.size();i++)
//	{
//		cout << num[i]<<endl;
//	}
	for (vector<int>::iterator it = num.begin(); it != num.end(); ++it) {
        cout << *it << " ";
    }
    
    for(vector<int>::iterator pp = num.begin();pp!=num.end();pp++)
	{
		cout << *pp << " ";
	} 
}
