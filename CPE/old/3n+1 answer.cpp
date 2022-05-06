#include <iostream>
using namespace std;

//�\��: ��X n �|�b�D�ر���U�A���j�h�֦��A�æb n == 1 �ɦ^�� ���j����
//��J: n(��l��), length(�ثe�����j����)
//��X: �^�ǻ��j����
int condition(int n, int length)
{
    if (n == 1)                             // n == 1 �����`��
    {
        return length;                      // �^�� ���j�`��
    }
    else if (n % 2 == 1)
    {
        n = (n * 3) + 1;                    // �_��: n => 3 * n + 1
        condition(n, ++length);             // ������ n == 1 �����~�򻼰j
    }
    else if (n % 2 == 0)
    {
        n /= 2;                             // ����: n => n / 2
        condition(n, ++length);             // ������ n == 1 �����~�򻼰j
    }
}
int main()
{
    int i, j;
    while (cin >> i >> j)
    {
        cout << i << " " << j << " ";       // ���L�X i, j �קK��X���ǥ��áA�D�حn�D��X(i j max)
        int max = 0;
        if (i > j)
        {
            int temp = i;                   // �p�Gi(����) > j(�k��) �洫i, j ����
            i = j;
            j = temp;
        }
        for (i; i <= j; i++) 
        {
            int length = 1;
            length = condition(i, length);
            if (max < length)
            {
                max = length;               // �����̲`���j����
            }
        }
        cout << max << endl;                // �L�X max(�̲`���j����)
    }
}
