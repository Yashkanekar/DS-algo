/*

    in insertion sort we take a element and find its place in the array by comparing the element with the previous elements of the array;
    in insertion we use shifting of elements rather than swapping;
    in insertio sort,  we assume that the element at the 0th index is already at the correct position and start comparing the element at 1st index with its previous elements and so on;

*/

void insertionSort(int *input, int size)
{
    for( int i = 1; i < size; i++ ){
        int currentVal = input[i]; 
        for( int j = i-1; j>=0; j-- ){
            if( input[j] > currentVal ){
                input[j+1] = input[j];			
                input[j] = currentVal;
            }
            else{
                break;
            }
        }
    }
}