#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

#if 1

void main()
{
	int T;
	int D;

	scanf("%d",&T);

	for(int k=0;k<T;k++)
	{
		char dividend[100] = { 0 };
		int quotient[100] = { 0 };
		int remainder = 0;
		int temp = 0;
		int iniCnt = 0;
		int endCnt = 0;
		int startPoint = 0;

		scanf("%s", &dividend);
		scanf("%d", &D);

		if ((dividend[0] - '0') >= D)
		{
			temp = dividend[0] - '0';
			quotient[0] = temp / D;
			remainder = temp%D;
			temp = remainder;
			startPoint++;
			if (startPoint == 1)
			{
				iniCnt = 0;
			}
		}
		else
		{
			temp = 10 * temp + dividend[0] - '0';
		}


		for (int i = 1; dividend[i] != '\0'; i++)
		{
			temp = 10 * temp + (dividend[i] - '0');
			if (temp < D)
			{
				if (startPoint != 0)
				{
					quotient[i] = 0;
					startPoint++;
				}

			}
			else if (temp >= D)
			{
				quotient[i] = temp / D;
				remainder = temp%D;
				temp = remainder;
				startPoint++;
				if (startPoint == 1)
				{
					iniCnt = i;
				}
			}
			endCnt = i;

		}

		for (int i = iniCnt; i <= endCnt; i++)
		{
			printf("%d", quotient[i]);		 			
		}

		printf("\n");  

	}


}

#endif

