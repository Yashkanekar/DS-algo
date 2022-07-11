/*

    while loops are important! stop using 'for' loops eveywhere;
	problem link: https://classroom.codingninjas.com/app/classroom/me/13935/content/253793/offering/3452457/problem/29
    variation of the dutch national flag problem;

*/
void sort012(int *arr, int n)
{
    int i = 0;
    int nextZero = 0;
    int nextTwo = n-1;

    while( i <= nextTwo ){
        if(arr[i] == 0){
            swap(arr[i], arr[nextZero]);
            i++;
            nextZero++;
        }
        else if(arr[i] == 2){
            swap(arr[i], arr[nextTwo]);
            nextTwo--;
        }
        else{
            i++;
        }
    }
}