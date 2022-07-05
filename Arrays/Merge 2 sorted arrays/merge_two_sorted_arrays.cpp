/*
    Compare each element of both the arrays and add the smaller element into the third array;
    We can use while loops with 2 conditions to ru 2 parallel loops or traverse 2 arrays parallelly is what i learned from this problem;

    problem link : https://classroom.codingninjas.com/app/classroom/me/13935/content/253793/offering/3452449/problem/981
*/


void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i = 0, j = 0, k = 0;
	
    while( i < size1 && j <size2 ){
        if( arr1[i] < arr2[j] ){
            ans[k] = arr1[i];
            i++;
            k++;
        }else{
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }
    
/*
    this loop will only be entered if arr1 is still remaining and arr2 is exhausted so we will copy all the elements from arr1 to the final array as it is;

*/

    while( i < size1 ){
        ans[k] = arr1[i];
        i++;
        k++;
    }
/*
    this loop will only be entered if arr2 is still remaining and arr1 is exhausted so we will copy all the elements from arr2 to the final array as it is;
    
*/
    while( j < size2 ){
        ans[k] = arr2[j];
        j++;
        k++;
    }
    
}