#include <stdio.h>

void bubble_sort(int* arr, int size)
{
	int buf;
	for (int i = 0; i < size - 1 ; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
		}
	}            
    for(int j = 0; j < size; j++)
    {
        if(arr[j]>0)
            printf("%d ",arr[j]);
    }
}

int main()
{
	int a[20] = {20,19,4,3,2,1,18,17,13,12,11,16,15,14,10,9,8,7,6,5};
	int b[5] = {5,4,3,2,1};
	int len;
	int *arr;
	printf("%p %p\n",a,b);
	scanf("%d%p", &len, &arr);
	bubble_sort(arr, len);
}
