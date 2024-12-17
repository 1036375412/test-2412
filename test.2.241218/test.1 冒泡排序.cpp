#include<stdio.h>
int main()
{
	int i, j, tmp;
	int arr[7];
	for(i=0;i<7;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0;i < 6;i++)
	{
		for(j=0;j<6-i;j++)
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
	}
	for (i = 0;i < 7;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}