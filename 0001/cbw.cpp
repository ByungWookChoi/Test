#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#define N 50
int Ten(int num)
{
	int result = 1;
	for (int i = 0; i < num; i++)
	{
		result *= 10;
	}
	return result;
}
int main()
{

	int T;
	scanf("%d", &T);
	int divideMom;
	for (int i = 0; i < T; i++)
	{
		char *divideSon = new char[N];
		char *result = new char[N];
		scanf("%s", divideSon);
		scanf("%d", &divideMom);
		int jariNum = 0;
		int temp = divideMom;
		int resultIdx = 0;

		while (temp != 0)
		{
			temp /= 10;
			jariNum++;
		}
		int idx = 0;
		int subSum = 0;
		bool isPrintZero = false;
		char cTemp;
		while (divideSon[idx] != '\0')
		{

			int mok = subSum / divideMom;
			int remainder = subSum % divideMom;

			subSum = remainder * Ten(1);
			subSum += (divideSon[idx] - '0');
			cTemp = (char)mok + '0';
			if (cTemp != '0' && isPrintZero==false)
				isPrintZero = true;
			if (isPrintZero == true)
			{
				result[resultIdx] = cTemp;
				resultIdx++;
			}
			idx++;
		}
		result[resultIdx] = (char)(subSum / divideMom) + '0';
		result[resultIdx+1] = '\0';
		printf("%s\n", result);

		delete[] divideSon;
		delete[] result;

	}

	return 0;
}