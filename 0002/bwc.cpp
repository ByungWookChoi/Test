#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int numOfArray;
		scanf("%d", &numOfArray);
		int *arr = new int[numOfArray];
		for (int index = 0; index < numOfArray; index++)
		{
			scanf("%d", &arr[index]);
		}
		int k;
		int maxValue = 0;
		int localMaxValue;
		for (int j = 0; j < numOfArray; j++)
		{
			localMaxValue = 1;
			for (k = j+1; k < numOfArray-1; k++)
			{
				if (arr[j]>arr[k])
				{
					localMaxValue++;
				}
				else
				{
					break;
				}
			}
			if (localMaxValue > maxValue)
				maxValue = localMaxValue;
		}
		printf("%d\n", maxValue);

	}


	return 0;
}