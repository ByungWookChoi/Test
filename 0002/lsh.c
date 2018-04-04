#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

#if 1

int A[1000 + 1] = { 0 };
int cntA[1000 + 1] = { 0 };



int main()
{

	int T = 0;
	int N = 0;
	int tmp = 0;
	int max = 0;

	scanf("%d", &T);


	for (int k = 0; k < T; k++)
	{
		scanf("%d", &N);

		for (int j = 0; j < N; j++)
		{
			scanf("%d", &A[j]);
		}

		max = 1;
		tmp = 1;

		cntA[0] = tmp;
		for (int i = 1; i < N; i++)
		{
			tmp = 1;
			for (int j = 0; j < i; j++)
			{
				if (A[j] < A[i])
				{
					if (tmp < cntA[j])
						tmp = cntA[j];
				}

			}

			cntA[i] = tmp + 1;
			if (max < cntA[i])
			{
				max = cntA[i];
			}
		}

		printf("%d\n", max);


	}

	return 0;

}


#endif