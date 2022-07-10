/*

    compare the elements at the 0th and 1st index annd swap the elements if 0th element > 1st element, continue this for one whole traversal of the array;
    after the first round the largest element will be placed at its proper position, after the second round/traversal the second largest element will be placed at the correct positio  and so on;
    total no of round will be (size-1) as when n- elements are at there right position then automatically the nth element will be at its right position


*/
void bubbleSort(int *input, int size)
{
    // Outer loop going for n-1 rounds
    for ( int i = 0; i < size-1 ; i++ ){
        // inner loop traversing the array and swapping the larger element 
        for ( int j = 0; j < size-i-1 ; j++ ){
            if( input[j] > input[j+1] ){
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }.
}