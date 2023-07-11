#include <stdio.h>

int findSmallest ( int arr[] , int size ) ;
void selectionSort(int arr[] , int size ) ;

int main(void)
{
    int arr [] = { 5 , 1 , 10 , 3 , 6};
    int size = sizeof(arr)/sizeof(arr[0]) ;
    selectionSort(arr , size);
    return 0;
}
int findSmallest ( int arr[] , int size )
{
    int smallest = arr[0] ;
    int smallestIndex = 0 ;
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i] ;
            smallestIndex = i ;
        }
    }
    return smallest ;
}
void selectionSort(int arr[] , int size )
{
    int storeSize = size ;
    int newArr [storeSize] ;
    int smallest ;
    for(int i = 0 ; i < storeSize ; i++)
    {
        smallest =  findSmallest ( arr , size );
        newArr[i] = smallest ;
        for (int j = 0 ; j < size ; j++ )
        {
            if(arr[j] == smallest)
            {
                for (int k = j ; k < size ; k++ )
                {
                    arr[k] = arr[k+1] ;
                }
                break;
            }
        }
        size -- ;
    }
    for (int x = 0 ; x <storeSize ; x++)
    {
        printf("%d " , newArr[x]);
    }
}
