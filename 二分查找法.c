
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#define  N 1024


void search(int a[N],int num)
{
	int  tou = 0;
	int wei = N - 1;

	int zhong;
	int flag = -1;//�����Ҳ���
	int ci = 0;
	while (tou <= wei)//ѭ��
	{
	
		zhong =( tou + wei) / 2;//ȡ�м�ֵ
		
		printf("\n%d,%d,%d,%d", tou, wei, zhong, ++ci);

		if (num==a[zhong])
		{
			printf("�ҵ���a[%d]=%d", zhong, num);
			flag = 1;
			break;
		} 
		else if (num> a[zhong])
		{
			tou = zhong + 1;

		} 
		else
		{

			wei = zhong - 1;
		}



	}

	if (flag ==-1)
	{
		printf("û���ҵ�");
	}










}

void search2(int a[N], int num)
{
	int  tou = 0;
	int wei = N - 1;

	int zhong;
	int flag = -1;//�����Ҳ���
	int ci = 0;
	while (tou <= wei)//ѭ��
	{

		//zhong = (tou + wei) / 2;//ȡ�м�ֵ
		// zhong = tou + (wei-tou) / 2;
		// zhong = tou + (wei-tou) * 1/2;
		//tou +0.5wei-0.5tou= (tou + wei) / 2
		//zhong = tou + (wei - tou) * 1 / 2;

		zhong = tou + (wei - tou) *1.0* (num - a[tou]) / (a[wei] - a[tou]);


		printf("\n%d,%d,%d,%d", tou, wei, zhong, ++ci);

		if (num == a[zhong])
		{
			printf("�ҵ���a[%d]=%d", zhong, num);
			flag = 1;
			break;
		}
		else if (num > a[zhong])
		{
			tou = zhong + 1;

		}
		else
		{

			wei = zhong - 1;
		}



	}

	if (flag == -1)
	{
		printf("û���ҵ�");
	}










}



void main()
{
	int a[N];
	for (int i = 0; i < N; i++)
	{
		a[i] = i;
		printf("%d  ", i);
	}
	int num;
	scanf("%d", &num);

	search2(a, num);//���ú�������
	

	system("pause");





}