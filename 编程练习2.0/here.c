#include <stdio.h>


//编写一个函数，返还存储在int类型数组中的最大值，并在一个简单程序中测试该函数

//int Max(int* p,int n);
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int z=Max(arr,10);
//	printf("最大值为%d", z);
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

//编写一个函数，返还存储在double类型数组中最大值和最小值的差值，并在一个简单的程序中测试该函数
//double chazhi(double*, int n);
//int main()
//{
//	double arr[10] = { 1.8,2.6,6.2,7.2,5.5,6.8,2.2,1.6,7.7,10.0 };
//	double l=chazhi(arr, 10);
//	printf("该数组中最大值与最小值的差为%lf", l);
//	return 0;
//}
//double chazhi(double* pz, int n)
//{
//	double max, min,cha;
//	int p;
//	cha = 0;
//		 max = min = *pz;//假设
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

//编写一个函数，把double类型中数组中的数据倒序排列，并在衣蛾简单的程序中刚测试该函数
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
	double min = *pz;//假设*pz最小
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