#include <stdio.h>
#define MAX 30
typedef int element;
int size;
element sorted[MAX];

void merge(element a[], int m, int middle, int n)
{
	int i, j, k, t;
	i = m;
	j = middle + 1;
	k = m;

	while (i <= middle && j <= n)//작은수부터 쌓으면서 combine
	{
		if (a[i] <= a[j])
		{
			sorted[k] = a[i];
			i++;
		}
		else
		{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}

	if (i > middle)//0~middle 다 쌓아서 middle+1~n 그대로 쌓기
	{
		for (t = j; t <= n; t++, k++)
		{
			sorted[k] = a[t];
		}
	}
	else//middle+1~n 다 쌓아서 0~middle 그대로 쌓기
	{
		for (t = i; t <= middle; t++, k++)
		{
			sorted[k] = a[t];
		}
	}

	for (t = m; t <= n; t++)
		a[t] = sorted[t];
	printf("\n Merge Sort >> ");
	for (t = 0; t < size; t++)
		printf("%4d ", a[t]);
}

void mergeSort(element a[], int m, int n)
{
	int middle;
	if (m < n)
	{
		middle = (m + n) / 2;
		mergeSort(a, m, middle);//앞에 절반 divide
		mergeSort(a, middle + 1, n);//뒤에 절반 divide
		merge(a, m, middle, n);//합치면서 sort
	}

}

void main()
{
	int t;
	element list[8] = { 69,10,30,2,16,8,31,22 };
	size = 8;
	printf("\n Items >> ");
	for (t = 0; t < size; t++)
		printf("%4d", list[t]);
	printf("\n\n<<<<<<<<<Execute Merge Sort >>>>>>>>>>\n");
	mergeSort(list, 0, size - 1);
	getchar();

}