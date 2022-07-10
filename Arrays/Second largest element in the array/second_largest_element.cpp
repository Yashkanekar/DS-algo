/*

 problem link : https://classroom.codingninjas.com/app/classroom/me/13935/content/253793/offering/3452457/problem/186
 traverse the array and simultaneously keep track of largest and second largest element in the array.
 
*/

#include <climits>

int findSecondLargest(int *input, int n){
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0; i < n; i++){
        if(input[i] > max){
            secondMax = max;
            max = input[i];
        }
        else if(input[i] > secondMax && input[i] != max){
            secondMax = input[i];
        }
    }
    return secondMax;
}