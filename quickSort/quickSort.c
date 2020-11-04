#include <stdio.h>
typedef int element;
int size, i = 0;

int partition(element a[], int begin, int end)
{
	int pivot, L, R, t;
	element temp;
	L = begin;
	R = end + 1;
	pivot = begin;//여기서는 begin을 pivot으로 설정
	printf("\n [Step %d: pivot=%d]\n", ++i, a[pivot]);
	do//quick sort
	{
		do//왼쪽부터 시작해서 pivot보다 큰 값에서 stop
		{
			L++;
		} while ((a[L] < a[pivot]) && (L <= R));

		do//오른쪽부터 시작해서 pivot보다 작은 값에서 stop
		{
			R --;
		} while ((a[R] > a[pivot]) && (L <= R));

		if (L < R)//L<R이면 서로 swap
		{
			temp = a[L];
			a[L] = a[R];
			a[R] = temp;
		}

	} while (L < R);//L과 R이 서로 교차할때까지 반복

	//왼쪽에서 제일 오른쪽이랑 pivot을 swap -> pivot 왼쪽은 pivot보다 작은 값들로, 오른쪽은 pivot보다 큰 값들로 구성
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
		p = partition(a, begin, end);//pivot을 정하고 왼쪽은 pivot보다 작은 수 , 오른쪽은 pivot보다 큰 수가 있게 sort
		quickSort(a, begin, p - 1);//pivot 왼쪽 다시 quick sort
		quickSort(a, p + 1, end);//pivot 오른쪽 다시 quick sort
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