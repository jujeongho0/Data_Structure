#include <stdio.h>

int size;

void insertionSort(int a[], int size)
{
	int i, j, t, temp;
	printf("\nInit Array : ");
	for (t = 0; t < size; t++)
		printf("%d ", a[t]);
	printf("\n\n<<<<<<Insertion Sorting >>>>>>>\n");
	for (i = 1; i < size; i++)
	{
		temp = a[i];//a[i] 값 복사해두기
		j = i;

		while ((j > 0) && (a[j - 1] > temp))//a[i]보다 앞에 있지만 큰 수들은 그대로 뒤로 땡기기
		{
			a[j] = a[j - 1];
			j = j - 1;
		}
		a[j] = temp;//적절한 자리에 삽입

		printf("\nStep %d: ", i + 1);
		for (t = 0; t < size; t++)
			printf("%3d ", a[t]);
	}
}

void main()
{
	int list[8] = { 69,10,30,2,16,8,31,22 };
	size = 8;

	insertionSort(list, size);
	getchar();

}