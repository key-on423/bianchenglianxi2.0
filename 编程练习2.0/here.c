#include <stdio.h>


//��дһ�������������洢��int���������е����ֵ������һ���򵥳����в��Ըú���

//int Max(int* p,int n);
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int z=Max(arr,10);
//	printf("���ֵΪ%d", z);
//	return 0;
//}
//int Max(int* pz,int n)
//{
//	int z;
//	for (z = 0;z < n;z++)
//	{
//		if (*pz < *(pz + z))
//			*pz = *(pz + z);
//	}
//	int max = *pz;
//	return max;
//}

//��дһ�������������洢��double�������������ֵ����Сֵ�Ĳ�ֵ������һ���򵥵ĳ����в��Ըú���
//double chazhi(double*, int n);
//int main()
//{
//	double arr[10] = { 1.8,2.6,6.2,7.2,5.5,6.8,2.2,1.6,7.7,10.0 };
//	double l=chazhi(arr, 10);
//	printf("�����������ֵ����Сֵ�Ĳ�Ϊ%lf", l);
//	return 0;
//}
//double chazhi(double* pz, int n)
//{
//	double max, min,cha;
//	int p;
//	cha = 0;
//		 max = min = *pz;//����
//	for (p = 0;p < n;p++)
//	{
//		if (min > *(pz + p ))
//		{
//			min = *(pz + p );
//		}
//		if (max < *(pz + p ))
//		{
//			max=*(pz+p);
//		}
//	}
//	cha = max - min;
//		return cha;
//}

//��дһ����������double�����������е����ݵ������У������¶�򵥵ĳ����иղ��Ըú���
void paixu(double*, int n);
int main()
{
	double arr[10]={ 8.5,7.2,6.5,7.7,1.2,5.4,6.6,7.3,4.2,8.1 };
	paixu(arr, 10);
	printf("\nDone!\n");
	return 0;
}
void paixu(double* pz, int n)
{
	int z,p;
	double min = *pz;//����*pz��С
	for (z = 0;z < n;z++)
	{
		for (p = z + 1;p < n;p++)
		{
			if (*(pz + z) > *(pz + p))
			{
				//double tmp = *(pz + z);
				*(pz + z) = *(pz + p);
				//*(pz + p) = tmp;
			}
		}
	}
	for (z = 0;z < n;z++)
	{
		printf("%.2lf, ", *pz + z);
	}
}