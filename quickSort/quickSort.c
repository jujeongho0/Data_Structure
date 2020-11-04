#include <stdio.h>
typedef int element;
int size, i = 0;

int partition(element a[], int begin, int end)
{
	int pivot, L, R, t;
	element temp;
	L = begin;
	R = end + 1;
	pivot = begin;//���⼭�� begin�� pivot���� ����
	printf("\n [Step %d: pivot=%d]\n", ++i, a[pivot]);
	do//quick sort
	{
		do//���ʺ��� �����ؼ� pivot���� ū ������ stop
		{
			L++;
		} while ((a[L] < a[pivot]) && (L <= R));

		do//�����ʺ��� �����ؼ� pivot���� ���� ������ stop
		{
			R --;
		} while ((a[R] > a[pivot]) && (L <= R));

		if (L < R)//L<R�̸� ���� swap
		{
			temp = a[L];
			a[L] = a[R];
			a[R] = temp;
		}

	} while (L < R);//L�� R�� ���� �����Ҷ����� �ݺ�

	//���ʿ��� ���� �������̶� pivot�� swap -> pivot ������ pivot���� ���� �����, �������� pivot���� ū ����� ����
	temp = a[pivot];
	a[pivot] = a[R];
	a[R] = temp;

	for (t = 0; t < size; t++)
		printf(" %d", a[t]);
	printf("\n");
	return R;
}

void quickSort(element a[], int begin, int end)
{
	int p;
	if (begin < end)
	{
		p = partition(a, begin, end);//pivot�� ���ϰ� ������ pivot���� ���� �� , �������� pivot���� ū ���� �ְ� sort
		quickSort(a, begin, p - 1);//pivot ���� �ٽ� quick sort
		quickSort(a, p + 1, end);//pivot ������ �ٽ� quick sort
	}
}

void main()
{
	element list[8] = { 69,10,30,2,16,8,31,22 };
	size = 8;
	printf("\n [Initialization] \n");
	for (int i = 0; i < size; i++)
		printf(" %d", list[i]);
	printf("\n");
	quickSort(list, 0, size - 1);
	getchar();
}