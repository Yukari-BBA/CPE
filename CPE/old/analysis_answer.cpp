#include <iostream>
#include <cctype>
#include <algorithm>
#include <cstring>
#include <cstdio>
#define len 5000
using namespace std;
int main() {
 int n, length, i, j, t; // �ŧi n �����ƶq�Alength �p���ڪ��� 
 char msg[len]; // �ŧi�@�Ӫ��׫ܤj���A�ΨӦs�y�l
 char alp[28]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 int num[28] = {}; // �p�ƥ�
 cin >> n; // ��J���
 cin.ignore(); // ����
 for(i = 0; i < n ; i++) {
  cin.getline(msg, len); // �v����o���e
  length = strlen(msg); // �p��y�l����
  for(j = 0; j < length; j++)
   if(isalpha(msg[j])) 
    num[toupper(msg[j])-'A']++; 
 } // �P�_�O�_���^��r���A�ç�O�^��r�����ন�j�g�A�A�⨺�ӭ^��r�����p�ƼW�[
 /* 
 int isalpha(int c);
 �ت�:�ˬd c �O�_���r��,
 �^�ǭ�:��^�D�s�ȡA�p�G c �O�@�Ӧr���A�_�h�� 0
 
 int toupper(int c);
 �ت�:�N c �ഫ���j�g
 ��^��:�Ө�Ƶ��Ī�^�j�g�r�� C �A�p�G�s�b�o�˪��ȡA�_�h c �O�����ܡC
 */
 for(i = 0; i < 26; i++) {
  for(j = 0; j < 26; j++) {
   if(num[j] < num[j+1]) {
    t = num[j];
    num[j] = num[j+1];
    num[j+1] = t;
    t = alp[j];
    alp[j] = alp[j+1];
    alp[j+1] = t;
   }
  }
 } // �q�Y�}�l��j�p�A�ƶq�V�j����V�e���A�A�N�ƶq��m�Q���ʹL���r�����L�h�P���гB
 for(j = 0; j < 26; j++)
  if(num[j])
   printf("%c %d\n", alp[j], num[j]); // ��ƶq�j��s���^��r���μƶq�L�X
 return 0;
}
