#include <stdio.h>

int sumOfArray(int arr[] , int size) ;
int count (int arr[] , int size) ;
int maxNumber(int arr[] , int size);


int main(void)
{
	int arr[] = {4 , 2 , 3 , 1 ,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("The sum of elements is %d" , sumOfArray(arr , size));
	printf("The number of elements is %d" , count (arr , size));
	printf("Max : %d" , maxNumber(arr,size));
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
