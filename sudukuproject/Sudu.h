#ifndef CIRCLE_H
#define CIRCLE_H

extern bool sign;		//�����ж������Ƿ�����ȫ
extern int num2[1000000][9];

void firstrank(int num[][9],int n,int sum[][9]);		//���ȡ���������һ�ŵ�ֵ
bool check(int n,int i,int j,int num[][9]);		//�ж�����n�ܷ����num[i][j]��
int build(int num[][9],int x,int y);		//������������
void change();			//����sign��ֵΪfalse
bool diffrent(int a[][9],int b[][9],int n);		//�Ƚ�a��b������ά�����Ƿ���ͬ

#endif