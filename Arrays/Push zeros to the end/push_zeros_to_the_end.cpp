/*
  given a array we have to push all the zeroes in the array to the end and also preserve the relative position of the non zero elements
  problem link : https://classroom.codingninjas.com/app/classroom/me/13935/content/253793/offering/3452457/problem/187
  I used insertion sort kindof approach in this problem  

*/


void pushZeroesEnd(int *input, int size)
{
    int  k = 0;
    for( int i = 0; i < size ; i++ ){
        if( input[i] != 0 ){
            input[k] = input[i];
            k++;
        }
    }
    while( k < size ){
        input[k] = 0;
        k++;
    }
}