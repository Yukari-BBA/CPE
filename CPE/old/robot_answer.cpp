#include <iostream> 
#include <string>
#include <stdio.h>
using namespace std;

// �\��G ��r�� dire �ഫ���Ʀr�]N = 0, E = 1, S = 2, W = 3�^
// ��J�G �ݶǤJ dire �r��
// �^�ǭȡG ��ƫ��A
int direction(char dire)
{
  if (dire == 'N')
    return 0;
  else if (dire == 'E')
    return 1;
  else if (dire == 'S')
    return 2;
  else
    return 3;
}

// �\��G �����H�}�l���ʡA�B�z�����H x,y ��
// ��J�G �ݶǤJ x �P y ��Ӿ�� reference �A �M�㦡���A d
// �^�ǭȡG �L
int move(int &x, int &y, int d)
{
  // �p�G d �O 0 y �N�[ 1 
  if (d == 0)
    ++y;
  // �p�G d �O 1 x �N�[ 1 
  else if (d == 1)
    ++x;
  // �p�G d �O 2 y �N�� 1 
  else if (d == 2)
    --y;
  // �p�G d �O 3 x �N�� 1 
  else
    --x;
  return 0;
}

// �\��G �P�_�����H�O�_�X��
// ��J�G �ݶǤJ x  y right upper �|�Ӿ�ƫ���
// �^�ǭȡG 0 �� 1
int fallout(int x, int y, int right, int upper)
{
  // �p�G�X�ɴN�^�� 1
  if (x == 0 || y == 0 || x > right || y > upper)
    return 1;
   // �p�G�S���X�ɴN�^�� 0
  else
    return 0;
}

// �\��G �洫 a �P b ����
// ��J�G �ݶǤJ a �P b ��Ӿ�ƫ���
// �^�ǭȡG �L
int main()
{
  int upper, right; // upper ���W����ɭ� �A right ���k����ɭ�
  int map[105][105] = {}; // �]�w�a�ϤW�k�̰���ɭ� 105
  cin >> right >> upper; // ��J�W�k��ɭ�
  ++upper, ++right; 

  int x, y; // x �������H x �y�Ц�m�Ay �������H y �y�Ц�m
  while (cin >> x)
  {
    char dire; // dire �������H�@�}�l���V��V �]N,S,E,W�^
    string op; // op �������H���U�Ӫ���� �]L,R,F�^
    int lost = 0; // lost ���P�_�����H�O�_�X��

    cin >> y >> dire; // ��J�����H y �y�Ц�m�A�����H�@�}�l���V��V
    cin >> op; // ��J�����H���U�Ӫ���� �]L,R,F�^
    int d = direction(dire); // d �����������H�ثe���V����V �]N = 0, E = 1, S = 2, W = 3�^
    ++x, ++y;
    
    // �o�� for �j��� op ���Ȥ@�ӭ�Ū�X�ӳB�z
    for (int i = 0; i < op.length(); i++)
    {
      // �p�G op[i] �ȬO R
      if (op[i] == 'R')
        d = (d + 1) % 4;
      
      // �p�G op[i] �ȬO L
      else if (op[i] == 'L')
        d = (d + 3) % 4;
      
      // �p�G op[i] �ȬO F
      else
      {
        // �� x y ���Ȥ��O�s�b tx ty
        int tx = x, ty = y;
        
        // ��tx ty d ���ȶǨ�禡move
        move(tx, ty, d);
        
        // �p�G�X��
        if (fallout(tx, ty, right, upper))
        {
          if (!map[tx][ty])
          {
            // �� lost �Ǭ� 1
            lost = 1;
            // ������H�X�ɪ��e�@�Ӧ�l�s�� 1
            map[tx][ty] = 1;
            // �p�G�����H�O�b (1,1)�X�� 
            if (x == 1 && y == 1)
              map[0][1] = map[1][0] = 1;
            // �p�G�����H�O�b (1,upper)�X�� 
            else if (x == 1 && y == upper)
              map[0][upper] = map[1][upper + 1] = 1;
            // �p�G�����H�O�b (right,1)�X�� 
            else if (x == right && y == 1)
              map[right + 1][1] = map[right][0] = 1;
            // �p�G�����H�O�b (right,upper)�X�� 
            else if (x == right && y == upper)
              map[right + 1][upper] = map[right][upper + 1] = 1;
            // ���}�o���j��
            break;
          }
        }
        // �p�G�S���X�ɡA�����H�N���Q����
        else
          move(x, y, d);
      }
    }
    // �ŧi�r�� di �A�ƭȬ� "NESW"
    char di[] = "NESW";
    
    // ��X�����H�̫��m�M���V����V
    cout << x - 1 << " " << y - 1 << " " << di[d];
    // �p�G�����H�X�ɡA�N��X" LOST"
    if (lost)
      cout << " LOST";

    cout << endl;
  }
  return 0;
}
