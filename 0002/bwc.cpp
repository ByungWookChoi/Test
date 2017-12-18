#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
int *Array;
int *maxArray;
int result = -1;
void FindMaxValue(int index)
{
	int maxValue = -1;
	int maxIdx;
	for (int i = 0; i < index; i++)
	{
		if (Array[i] < Array[index])
		{
			if (maxValue < maxArray[i])
			{
				maxValue = maxArray[i];
				maxIdx = i;
			}

		}
	}

	maxArray[index] = maxArray[maxIdx] + 1;
	if (result < maxArray[index])
		result = maxArray[index];
}

int main()
{
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int arrayLength;
		scanf("%d", &arrayLength);
		Array = new int[arrayLength];
		maxArray = new int[arrayLength];
		int max = 1;
		for (int j = 0; j < arrayLength; j++)
		{
			scanf("%d", &Array[j]);
		}
		for (int j = 0; j < arrayLength; j++)
		{
			if (j>0)
			{
				FindMaxValue(j);
			}
			else
			{
				maxArray[j] = 1;
			}
		}
		
		printf("%d\n", result);
		result = -1;
		delete[] Array;
		delete[] maxArray;
	}
	return 0;
}