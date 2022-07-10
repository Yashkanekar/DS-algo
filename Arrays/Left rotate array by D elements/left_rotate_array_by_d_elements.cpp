/*

problem link : https://classroom.codingninjas.com/app/classroom/me/13935/content/253793/offering/3452457/problem/188
first reverse the whole array;
then reverse the 0 to n-d-1 elements;
then reverse the n-d to n-1 elements;

*/

void swapElements( int *input, int i, int j ){
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}

void reverse( int *input, int start, int end ){
    
    int i = start;
    int j = end;
    
    while( i < j ){
        swapElements(input, i,j);
        i++;
        j--;
    }  
}

void rotate(int *input, int d, int n){
    
    if( n == 0 ){
        return;
    }  
    reverse(input, 0, n-1);
    reverse(input, 0, n-d-1);
    reverse(input, n-d, n-1);
}


/*

self approach (Time limit exceeding)

void rotate(int *input, int d, int n)
{
    for( int i = 0; i < d; i++ ){
        int k = 0;
        int currentVal = input[k];
        while( k < n-1 ){
            input[k] = input[k+1];
            input[k+1] = currentVal;
            k++;
        }
    }
}

*/