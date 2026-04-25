#include <stdio.h>
#define N 10


int getMax(int Array[])
{
	int max = Array[0];
	int i_max = 0;
	int i;
	for (i = 0; i < N; i++)
	{
		if (Array[i] > max)
		{
			max = Array[i];
			i_max = i;
		}
	}
	return i_max;
}

int getMin(int Array[])
{
	int min = Array[0];
	int i_min = 0;
	int i;
	for (i = 0; i < N; i++)
	{
		if (Array[i] < min)
		{
			min = Array[i];
			i_min = i;
		}
	}
	return i_min;
}

void main()
{
	int array1[N], array2[N];
	int i_max, max, i_min;
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &array1[i]);
	}
	i_max = getMax(array1);
	max = array1[i_max];
	for (i = 0; i < N; i++)
	{
		i_min = getMin(array1);
		array2[i] = array1[i_min];
		array1[i_min] = max;
	}
	for (i = 0; i < N; i++)
	{
		printf("%d ", array2[i]);
	}
}

