#ifndef CIRCLE_H
#define CIRCLE_H

extern bool sign;		//用于判断数独是否构造完全
extern int num2[1000000][9];

void firstrank(int num[][9],int n,int sum[][9]);		//随机取数独矩阵第一排的值
bool check(int n,int i,int j,int num[][9]);		//判定数字n能否放入num[i][j]中
int build(int num[][9],int x,int y);		//构建数独矩阵
void change();			//重置sign的值为false
bool diffrent(int a[][9],int b[][9],int n);		//比较a，b两个二维数组是否不相同

#endif