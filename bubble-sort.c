
#include <stdio.h> 

#define MAX_LEN 100

static void swap(int *x, int *y)
{ 
	int tmp = *x; 
	*x = *y; 
	*y = tmp; 
} 

static void bubble_sort(int *arr, int len)
{ 
	int i, j;

	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1; j++)  
			if (arr[j] > arr[j + 1]) 
				swap(&arr[j], &arr[j + 1]); 
}

static void print_array(int *arr, int len)
{
	int i;

	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[MAX_LEN], len, i;
	
	printf("What's the length of the array? Maximum lenght is %d\n", MAX_LEN);
	scanf("%d", &len);

	printf("Gimme the %d elements\n", len);
	for (i = 0; i < len; i++) {
	scanf("%d", &arr[i]);
	}

	printf("Nonsorted array: ");
	print_array(arr, len);

	bubble_sort(arr, len);

	printf("Sorted array: ");
	print_array(arr, len);

	return 0; 
} 
