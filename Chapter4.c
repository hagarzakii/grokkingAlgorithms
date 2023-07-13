#include <stdio.h>

int sumOfArray(int arr[] , int size) ;
int count (int arr[] , int size) ;
int maxNumber(int arr[] , int size);
void swap(int* a, int* b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);

int main(void)
{
	int arr[] = {4 , 2 , 3 , 1 ,6, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("The number of elements is %d\n" , count (arr , size));
	printf("Max : %d\n" , maxNumber(arr,size));
	quickSort(arr, 0, size - 1);
    printf("Sorted array: ");
    printArray(arr, size);
	printf("The sum of elements is %d\n" , sumOfArray(arr , size));
	return 0;
}
int sumOfArray(int arr[] , int size)
{
	int sum = 0;
	if(size == 0)
	{
		return 0 ;
	}
	else
	{
		sum = arr[0];
		for(int i = 0 ; i <= size ; i++)
		{
			arr[i] = arr[i+1];
		}
		size --;
		return sum + sumOfArray(arr,size);
		
	}
}
int count (int arr[] , int size)
{
	 if(size == 0)
     {
         return 0;
     }
     else
	 {
         return 1 + count(&arr[1] , size-1);
     }
}
int maxNumber(int arr[] , int size)
{
    if(size==2)
    {
        if(arr[0]>arr[1])
        {
            return arr[0];
        }
        else
        {
            return arr[1];
        }
    }
    int subMax = maxNumber(&arr[1], size - 1);
    if(arr[0] > subMax)
    {
        return arr[0];
    }
    else
    {
        return subMax ;
    }
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);

        quickSort(arr, low, pivot_index - 1);
        quickSort(arr, pivot_index + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}