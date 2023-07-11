#include <stdio.h>

int binarySearch(int myList[] , int item , int size) ;

int main(void)
{
int myList [] = {1,3,5,7,9} ;
int size = sizeof(myList)/sizeof(myList[0]) ;
printf("%d" , binarySearch(myList , 0 , size));

return 0 ;
}
int binarySearch( int myList[] , int item , int size )
{
int low = myList[0] ;
int high = size - 1 ;
while(low <= high)
{
int mid = (low + high)/2 ;
int guess = myList[mid] ; 
if(guess == item )
{
return mid ;
}
else if (guess > item )
{
high = mid - 1 ;
}
else 
{
low = mid +1 ;
}
}
return -1 ;
}
